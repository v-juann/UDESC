/*Implemente a série de Taylor para calcular a função exponencial e^x:
O algoritmo deve solicitar como entrada o valor de x e quantidade de termos da série.*/
#include<stdio.h>

float soma = 1;

//função que calcula o fatorial
float fat(float n){
    if(n == 0){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

//função que calcula a potência
float power(float n, float e){
    if(e == 0){
        return 1;
    }else{
        return n * power(n, e-1);
    }
}

//função recursiva
    float soma_taylor(float x, float y){
        if(y == 0){
            return soma;
        }else{
            soma += (power(x, y)/fat(y));
            return soma_taylor(x, y-1);
        }
    }
    
//fução iterativa
    float soma_taylor2(float x, float y){
        for(float n = x; n < 0; n--){
            soma += (power(x, n) / (fat (n)));
        }
    return soma;
    }

int main(){
    float x, y;

    printf("Digite o valor de x: \n");
    scanf("%f",  &x);
    printf("Digite o número de termos da série: \n");
    scanf("%f",  &y);
    

    printf("%f\n", soma_taylor(x, y));
    printf("%f\n", soma_taylor2(x, y));

    return 0;
 }