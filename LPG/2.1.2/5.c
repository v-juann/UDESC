/*Escreva uma função que recebe um vetor e sua capacidade como parâmetros e precisa “retornar” o
maior e o menor valores do vetor.
void max_min(int vet[], int tam, int *pMin, int *pMax);*/ 
#include<stdio.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main(){
    int tam, min, max;

    printf("Digite o tamanho para um vetor: \n");
    scanf("%d", &tam);

    int vet[tam];

    for(int x = 0; x < tam; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d", &vet[x]);
    }

    max_min(vet, tam, &min, &max);

    printf("O maior valor é: %d\n", max);
    printf("O menor valor é: %d", min);

    return 0;
}

void max_min(int vet[], int tam, int *pMin, int *pMax){
    int maior = vet[0], menor = vet[0];
    for(int x = 1; x < tam; x++){
        if(vet[x] > maior){
            maior = vet[x];          
        }
        if(vet[x] < menor){
            menor = vet[x];
        }
    }
    (*pMax) = maior;
    (*pMin) = menor;
}