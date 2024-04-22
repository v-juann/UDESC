/*– Dadas 2 matrizes A e B compatíveis, gerar a matriz C, produto de AxB.
O programa deve ler as dimensões (número de linhas e número de colunas) tanto da matriz A quanto
da matriz B. Se ambas as dimensões forem compatíveis para uma operação de multiplicação (número
de colunas de A deve ser igual ao número de linhas de B), o programa deve prosseguir. Caso
contrário, deve mostrar uma mensagem de erro para o usuário e encerrar a execução. Os valores das
matrizes A e B devem ser gerados randomicamente para as duas matrizes(A e B). Deve-se usar uma
mesma função para geração dos valores randômicos usando VLA. Após isso, mostrar os valores de
ambas as matrizes (uma de cada vez) na tela. Também sugere-se usar uma única função com VLA. Em
seguida, gerar a matriz C com o produto da matriz A pela matriz B. A matriz produto também deverá
ser impressa na tela com a mesma função usada para imprimir as duas primeiras matrizes. S*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_matriz(int x, int y, int mat[x][y]);
void mostra_matriz(int x,int y,int mat[x][y]);
void produto_matrizes(int i1,int j1,int i2,int j2,int A[i1][j1],int B[i2][j2],int C[i1][j2]);

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
  int matA[i1][j1];
  int matB[i2][j2];
  int matC[i1][j2];

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
void produto_matrizes(int i1,int j1,int i2,int j2,int A[i1][j1],int B[i2][j2],int C[i1][j2]){
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
