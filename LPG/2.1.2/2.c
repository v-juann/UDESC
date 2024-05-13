/*Escreva uma função que troca os valores entre duas variáveis do tipo float. Faça um programa que leia
duas variáveis e mostre seus valores na tela. Em seguida, troque os valores (usando a função) e mostre
novamente os valores.
void troca_valor(float *x, float *y);*/
#include<stdio.h>

void troca_valor(float *x, float *y);

int main(){
    float x, y;

    printf("Digite o valor de X e Y, respectivamente: \n");
    scanf("%f%f", &x, &y);

    printf("Valor de X: %.2f\nValor de Y: %.2f\n", x, y);

    troca_valor(&x, &y);

    printf("Valor de X: %.2f\nValor de Y: %.2f\n", x, y);

    return 0;
}
void troca_valor(float *x, float *y){
    int aux = (*x);
    (*x) = (*y);
    (*y) = aux;
}