/*Faça um programa que leia um conjunto de números inteiros e armazene-os em um
vetor. Em seguida, deve exibir as seguintes informações a partir dos valores do vetor: 
i)mediana; ii) moda; iii) outliers (usando o método Z score); e iv) agrupamento dos
valores em primeiro, segundo e terceiro quartil. */
#include<stdio.h>
#include<math.h>

float mediana(int *vetor);

int moda(int *vetor);

void outliers(int *vetor);

void agrupamento(int *vetor);

void sortVetor(int *vetor);

int main(){
    int v[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    sortVetor(v);

    printf("\n\nMediana do vetor: %.2f\n", mediana(v));
    if(moda(v) == 0){
        printf("Não há moda para este vetor.\n");
    }else{
        printf("Moda do vetor: %d\n", moda(v));
    }
    outliers(v);
    agrupamento(v);
    return 0;
}

float mediana(int *vetor){
    return ((float)(vetor[4]+vetor[5])/2);
}

int moda(int *vetor){
    int posiRep = 0, repetido = 0, cont = 0;
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(vetor[j] == vetor[i]){
                cont++;
            }
        }
        if(cont > repetido){
            repetido = cont;
            posiRep = i;
        }     
        cont = 0;        
    }
    if(repetido == 1){
        return 0;
    }
    return vetor[posiRep];
}

void outliers(int *vetor){
    float soma = 0, media;
    for(int i = 0; i < 10; i++){
        soma += vetor[i];
    }
    media = soma / 10;
    soma = 0;
    for(int i = 0; i < 10; i++){
        soma += pow((vetor[i]-media),2);
    }
    float dp = sqrt(soma/10);

    for(int i = 0; i < 10; i++){
        if(((vetor[i] - media) / dp) > 2.29 || ((vetor[i] - media) / dp) < -2.29){
            printf("Outlier(s): %d\n", vetor[i]);
        }
    }

}

void agrupamento(int *vetor){
    printf("Q1: %d\n", vetor[7]);
    printf("Q2: %.2f\n", mediana(vetor));
    printf("Q3: %d\n", vetor[2]);
}

void sortVetor(int *vetor){
    int maiorValor = 0, posiMaior = 0;
    for(int z = 0; z < 10; z++){
        for(int x = z; x < 10; x++){
            if (vetor[x] > maiorValor){
                maiorValor = vetor[x];
                posiMaior = x;
            }
        }
        int aux = vetor[z];
        vetor[z] = maiorValor;
        vetor[posiMaior] = aux;
        maiorValor = 0;
    }    
}