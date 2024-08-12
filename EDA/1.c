/*Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro 
se a soma de qualquer par de números em v for igual a k.
○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 1*/
#include<stdio.h>
#include<stdlib.h>

int valida_vetor(int *v, int n, int k);

int main(){
    int n, k;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    printf("Digite o valor k: \n");
    scanf("%d", &k);    

    int vetor[n];

    for(int i = 0; i < n; i++){        
        printf("Digite o elemento %d do vetor: \n", i+1);
        scanf("%d", &vetor[i]);        
    }

    if(valida_vetor(vetor, n, k) == 1){
        printf("True\n");
    } else{
        printf("False\n");
    }

    return 0;
}

int valida_vetor(int *v, int n, int k){
    for(int x = 0; x < n-1; x++){
        for(int y = x+1; y < n; y++){
            if((v[x] + v[y]) == k){
                return 1;
            }
        }
    }
    return 0;
}