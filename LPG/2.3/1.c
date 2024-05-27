/*Escreva uma função que recebe um vetor float v e sua capacidade n, e retorne o endereço de um
vetor alocado dinamicamente, cujo conteúdo seja o mesmo de v, ou seja, a função retorna um
clone do vetor v. Faça o programa principal com a entrada de dados (ou um vetor fixo), chame a
função e mostre o vetor resultante na tela. Protótipo da função:
float *clone( float *v, int n );*/
#include<stdio.h>
#include<stdlib.h>

float *clone( float *v, int n );

int main(){
    int n;

    printf("Digite a quantidade de elementos deste vetor: \n");
    scanf("%d", &n);

    float vetor[n];
    for(int z = 0;z < n;z++){
        printf("Digite o elemento %d: \n", z);
        scanf("%f", &vetor[z]);
    }

    float *vetorClone = clone(vetor, n);
    
    for(int z = 0;z < n;z++){
        printf("%.2f ", vetorClone[z]);
    }
    return 0;
}

float *clone( float *v, int n ){
    float *novoVetor = malloc(n * sizeof(float));

    for(int x = 0; x < n; x++){
        novoVetor[x] = v[x];
    }

    return novoVetor;
}