/*Faça um programa que calcule o somatório dos k termos da série definida a seguir e, ao final, mostre
o somatório dos termos (o resultado converge para o logaritmo natural de 2). O número de termos
da série (n) é definido pelo usuário.*/
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

//função recursiva
    float soma_log(float x){
        if(x == 0){
            return soma;
        }else{
            soma += ((power(-1, x+1)) / x);
            return soma_log(x-1);
        }
    }
    
//fução iterativa
    float soma_log2(float x){
        for(float n = x; n < 0; n--){
            soma += ((power(-1, n + 1)) / x);
        }
    return soma;
    }

int main(){
    float x;

    printf("Digite o número de termos da série: \n");
    scanf("%f",  &x);
    

    printf("%f\n", soma_log(x));
    printf("%f\n", soma_log2(x));

    return 0;
 }