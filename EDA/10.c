/*Faça um programa que leia um conjunto de números inteiros e armazene-os em um
vetor. Em seguida, deve exibir as seguintes informações a partir dos valores do vetor: 
i)mediana; ii) moda; iii) outliers (usando o método Z score); e iv) agrupamento dos
valores em primeiro, segundo e terceiro quartil. */
#include<stdio.h>

int mediana;
int moda;
int outliers;
int agrupamento;

void sortVetor(int *vetor);

int main(){
    int v[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    sortVetor(v);
}

void sortVetor(int *vetor){
    int maiorValor = 0;
    for(int x = 0; x < 10; x++){
        if (vetor[x] > maiorValor){
            maiorValor = vetor[x];
        }
    }
}