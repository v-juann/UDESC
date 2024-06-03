/*Escreva um programa que realize a multiplicação entre duas matrizes A e B alocadas dinamicamente. A
matriz resultante também deve ser gerada dinamicamente, de acordo com o algoritmo de multiplicação.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_matriz(int x, int y, int **mat);
void mostra_matriz(int x,int y,int **mat);
void produto_matrizes(int i1,int j1,int i2,int j2,int **A,int **B,int **C);

int main() {
  int i, j, k, i1, j1, i2, j2;
  int soma = 0;

  printf("Digite o numero de linhas e colunas da primeira matriz: \n");
  scanf("%d%d", &i1, &j1);
  printf("Digite o numero de linhas e colunas da segunda matriz: \n");
  scanf("%d%d", &i2, &j2);

  if(j1 != i2){
    printf("Matrizes incompatíveis!\n");
    return 0;
  }
  int **matA = malloc(sizeof(int*)*i1);
  int **matB = malloc(sizeof(int*)*i2);;
  int **matC = malloc(sizeof(int*)*i1);;

  srand(time(0));

  preenche_matriz(i1, j1, matA);
  preenche_matriz(i2, j2, matB);

  mostra_matriz(i1, j1, matA);
  printf("\n");
  mostra_matriz(i2, j2, matB);

  produto_matrizes(i1, j1, i2, j2, matA, matB, matC);
  printf("\nProduto da matriz A com a matriz B: \n");
  mostra_matriz(i1, j2, matC);

  return 0;
}

void preenche_matriz(int x, int y, int **mat) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      mat[i][j] = rand() % 10;
    }
  }
}
void mostra_matriz(int x, int y, int **mat){
  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      printf(" %d ", mat[i][j]);
    }
    printf("\n");
  }
}
void produto_matrizes(int i1,int j1,int i2,int j2,int **A ,int **B,int **C){
  for (int i = 0; i < i1; i++) {
    for (int j = 0; j < j2; j++) {
      int soma = 0;
      for (int k = 0; k < j1; k++) {
        soma += A[i][k] * B[k][j];
      }
      C[i][j] = soma;
    }
  }
}