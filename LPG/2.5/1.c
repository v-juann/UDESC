/*Crie um programa que crie um vetor de ponteiros do tipo float com 5 elementos que irão
armazenar as notas de 5 estudantes. Em seguida, pergunte ao usuário qual o número de notas.
Após isto, aloque dinamicamente os 5 ponteiros do vetor criado de modo que possam armazenar
a quantidade de notas indicada (que será igual para todos os estudantes). Por fim, peça para o
usuário digitar todas as notas de todos os estudantes e mostre-as na tela.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *vet[5];
    int n;

    printf("Digite a quantidade de notas: \n");
    scanf("%d", &n);

    *vet = realloc(*vet, sizeof(float) * n);

    for(int z = 0; z < 5; z++){
        for(int x = 0; x < n; x++){
            printf("Digite a nota %d do aluno %d: \n", x+1, z+1);
            scanf("%f", vet[z][x]);
        }
    }

    return 0;
}