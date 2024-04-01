/*Escreva um programa que:
• leia um conjunto A de 20 valores numéricos e armazene-os em um vetor;
• calcule e imprima o valor de S, onde:*/
#include<stdio.h>

int main(){
    float a[20];
    float soma = 0;

    for(int n = 0; n < 20; n++){
        printf("Digite o valor %d : \n", n + 1);
        scanf("%f", &a[n]);
    }

    for(int i = 1; i < 10; i++){
        soma += ((a[i] - a[20-i]) * (a[i] - a[20-i]));
    }
        printf("Valor da soma: %.2f", soma);

    return 0;
}