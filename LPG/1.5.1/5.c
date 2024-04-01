/*Implemente um programa para calcular o valor aproximado de π, conforme a série de Gregory Leibniz. O número de termos é definido pelo usuário.
Série de Gregorx-Leibniz:*/
#include<stdio.h>

float soma = 0;

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
float imp(float x){
    return x * 2 - 1;
}
//função recursiva
    float soma_leibniz(float x){
        if(x == 0){
            return soma;
        }else{
            soma += (((power(-1, x+1)) * 4 )/ imp(x));
            return soma_leibniz(x-1);
        }
    }
    
//fução iterativa
    float soma_leibniz2(float x){
        for(int n = x; n < 0; n--){
            soma += (((power(-1, n + 1)) * 4 ) / imp(x));
        }
    return soma;
    }

int main(){
    float x;

    printf("Digite o número de termos da série: \n");
    scanf("%f",  &x);
    

    printf("%f\n", soma_leibniz(x));
    printf("%f\n", soma_leibniz2(x));

    return 0;
 }