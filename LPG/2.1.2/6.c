/*Escreva um programa que determine o maior valor de um vetor bem como sua posição no vetor (índice).
Tal processamento deve ser feito em uma função que recebe o vetor (do tipo float) e sua capacidade, e
“retorna” o maior elemento e sua posição.
void max_vetor(float vet[], int tam, float *pMax, int *pIndice);*/
#include<stdio.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main(){
    int tam, indice;
    float max;

    printf("Digite o tamanho para um vetor: \n");
    scanf("%d", &tam);

    float vet[tam];

    for(int x = 0; x < tam; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%f", &vet[x]);
    }

    max_vetor(vet, tam, &max, &indice);

    printf("O maior valor é: %.2f\n", max);
    printf("A posição do maior valor é: %d", indice);

    return 0;
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
    float maior = vet[0];
    int indice = 0;
    for(int x = 1; x < tam; x++){
        if(vet[x] > maior){
            maior = vet[x];
            indice = x;          
        }
    }
    (*pMax) = maior;
    (*pIndice) = indice;
}