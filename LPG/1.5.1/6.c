/*Implemente um programa para calcular o valor aproximado de π, conforme a série de Nilakantha.
O número de termos é definido pelo usuário.
Série de Nilakantha:*/
#include<stdio.h>

float soma = 4;

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

//contador de impares
float seq(float x){
    return (x * 2 - 1) * (x * 2) * (x * 2 - 2);
}
//função recursiva
    float soma_nilakantha(float x){
        if(x == 1){
            return soma;
        }else{
            soma += (((power(-1, x+1)) * 4 ) / seq(x));
            return soma_nilakantha(x-1);
        }
    }
    
//fução iterativa
    float soma_nilakantha2(float x){
        for(int n = x; n < 1; n--){
            soma += (((power(-1, n + 1)) * 4 ) / seq(x));
        }
    return soma;
    }

int main(){
    float x;

    printf("Digite o número de termos da série: \n");
    scanf("%f",  &x);
    

    printf("%f\n", soma_nilakantha(x));
    printf("%f\n", soma_nilakantha2(x));

    return 0;
 }