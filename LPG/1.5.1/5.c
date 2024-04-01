/*Implemente um programa para calcular o valor aproximado de π, conforme a série de GregoryLeibniz. O número de termos é definido pelo usuário.
Série de Gregory-Leibniz:*/
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
float pow(float n, float e){
    if(e == 0){
        return 1;
    }else{
        return n * pow(n, e-1);
    }
}

//função recursiva
    float soma_log(float x, float y){
        if(y == 0){
            return soma;
        }else{
            soma += ((pow(-1, y+1)) * 4 / y + 2);
            return soma_log(x, y-1);
        }
    }
    
//fução iterativa
    float soma_log2(float x, float y){
        for(float n = x; n < 0; n--){
            soma += ((pow(-1, n + 1)) * 4 / y + 2);
        }
    return soma;
    }

int main(){
    float x, y;

    printf("Digite o valor de x: \n");
    scanf("%f",  &x);
    printf("Digite o número de termos da série: \n");
    scanf("%f",  &y);
    

    printf("%f\n", soma_log(x, y));
    printf("%f\n", soma_log2(x, y));

    return 0;
 }