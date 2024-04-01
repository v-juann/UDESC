/*Faça um programa que leia um inteiro n e utilize uma função (faça as versões iterativa e
recursiva) para determinar a soma S da série harmônica definida a seguir:*/
#include<stdio.h>

int soma = 0;

//função recursiva
    int soma_inteiros(int x){
        if(x == 0){
            return soma;
        }else{
            soma += (1/x);
            return soma_inteiros(x-1);
        }
    }
    
//fução iterativa
    int soma_inteiros2(int x){
        for(int n = x; n < 0; n--){
            soma += (1/n);
        }
    return soma;
    }

int main(){
    int x;

    printf("Digite o número: \n");
    scanf("%d",  &x);

    printf("%d\n", soma_inteiros(x));
    printf("%d\n", soma_inteiros2(x));

    return 0;
 }