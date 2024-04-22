/*Dada uma matriz original qualquer, gere a matriz transposta desta original.
A dimensão da matriz original (número de linhas e número de colunas) deve ser indicada pelo
usuário. Ambos devem maiores que 1. Os valores da matriz original podem ser gerados
randomicamente numa função. A matriz transposta deve ser uma outra matriz (não sobrescrever os
valores da matriz original) e pode ser gerada em uma função. Os valores de ambas as matrizes devem
ser mostrados na tela. Recomenda-se usar uma mesma função com VLA.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_matriz(int x, int y, int mat[x][y]);
void mostra_matriz(int x,int y,int mat[x][y]);
void gera_matriz_transposta(int x,int y,int mat[x][y],int transp[y][x]);


int main() {
  int i, j, k;
  int soma = 0;

  printf("Digite o numero de linhas e colunas da primeira matriz: \n");
  scanf("%d%d", &i, &j);

  int mat[i][j];
  int matT[j][i];

  srand(time(0));

  preenche_matriz(i, j, mat);

  mostra_matriz(i, j, mat);

  gera_matriz_transposta(i, j, mat, matT);
  printf("\nTransposta:\n");
  mostra_matriz(j, i, matT);

  return 0;
}

void preenche_matriz(int x, int y, int mat[x][y]) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      mat[i][j] = rand() % 10;
    }
  }
}
void mostra_matriz(int x, int y, int mat[x][y]){
  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      printf(" %d ", mat[i][j]);
    }
    printf("\n");
  }
}
void gera_matriz_transposta(int x,int y,int mat[x][y],int transp[y][x]){
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            transp[j][i] = mat[i][j];
    }
  }
}
