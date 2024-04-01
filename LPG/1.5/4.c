/*Faça um programa que leia um inteiro n e utilize uma função (faça as versões iterativa e
recursiva) para calcular o somatório que determina o valor da constante e:*/
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

//função recursiva
    float soma_inteiros(float x){
        if(x == 0){
            return soma;
        }else{
            soma += (1/fat(x));
            return soma_inteiros(x-1);
        }
    }
    
//fução iterativa
    float soma_inteiros2(float x){
        for(float n = x; n < 0; n--){
            soma += (1 / (fat (n)));
        }
    return soma;
    }

int main(){
    float x;

    printf("Digite o número: \n");
    scanf("%f",  &x);

    printf("%f\n", soma_inteiros(x));
    printf("%f\n", soma_inteiros2(x));

    return 0;
 }