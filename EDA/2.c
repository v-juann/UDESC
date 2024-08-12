/*Dado um vetor de números inteiros v, retorne um novo vetor de forma que cada
elemento no índice i seja o produto de todos os números na matriz original, com
exceção de i.*/
#include<stdio.h>
#include<stdlib.h>

int *transforma_vetor(int *v, int n);

int main(){
    int n;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);  

    int vetor[n];

    for(int i = 0; i < n; i++){        
        printf("Digite o elemento %d do vetor: \n", i+1);
        scanf("%d", &vetor[i]);        
    }

    int *novoVetor = transforma_vetor(vetor, n);

    printf("[");
    for(int i = 0; i < n; i++){        
        printf(" %d ", novoVetor[i]);
    }
    printf("]");

    return 0;
}

int *transforma_vetor(int *v, int n){
    int *vetorTransformado = malloc(sizeof(int) * n);

    for(int x = 0; x < n; x++){
        int soma = 1;
        for(int z = 0; z < n; z++){
            if(z == x){
                soma+= 0;
            } else{
                soma*= v[z];
            }
        }
        vetorTransformado[x] = soma; 
    }
    return vetorTransformado;
}