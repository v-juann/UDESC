/*Escreva um programa que aloca dinamicamente um vetor do tipo float e realiza a entrada de
dados. Em seguida, o programa deve calcular a média dos valores do vetor e alocar
dinamicamente um novo vetor contendo somente os valores maiores ou iguais à media. O
processo pode ser feito usando malloc(), ou seja, fazendo a contagem, alocação e cópia dos
valores.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, cont = 0;

    printf("Digite a quantidade de elementos deste vetor: \n");
    scanf("%d", &n);

    float *vetor = malloc(sizeof(float)*n);

    float somaVet = 0, mediaVet;
    for(int z = 0;z < n;z++){
        printf("Digite o elemento %d: \n", z);
        scanf("%f", &vetor[z]);
        somaVet += vetor[z];
    }
    
    mediaVet = somaVet / n;

    for(int z = 0;z < n;z++){
        if(vetor[z] >= mediaVet){
            cont++;
        }
    }

    float *vetorNovo = malloc(sizeof(float)*cont);
    int y = 0;

    for(int z = 0;z < n;z++){
        if(vetor[z] >= mediaVet){
            vetorNovo[y] = vetor[z];
            y++;
        }
    }

    for(int z = 0;z < cont;z++){
        printf("%.2f ", vetorNovo[z]);
    }
    return 0;
}