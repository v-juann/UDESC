/*Faça um programa que calcule o somatório dos k termos da série harmônica e, ao final, mostre o
somatório dos termos. O número de termos da série (k) é definido pelo usuário.*/
#include<stdio.h>

float soma = 0;

//função recursiva
    float soma_inteiros(float x){
        if(x == 0){
            return soma;
        }else{
            soma += (1/x);
            return soma_inteiros(x-1);
        }
    }
    
//fução iterativa
    float soma_inteiros2(float x){
        for(int n = x; n < 0; n--){
            soma += (1/n);
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