/*Escreva um programa em C que crie duas matrizes de inteiros A[4][5] e B[5][3].
Gere valores para as 2 matrizes e crie uma nova matriz C[4][3] com a
multiplicação das duas primeiras. Tente criar funções*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_matrizA(int mat[][5], int x, int y);
void preenche_matrizB(int mat[][3], int x, int y);

int main() {
  int i, j, k;
  int soma = 0;
  int matA[4][5];
  int matB[5][3];
  int matC[4][3];
  srand(time(0));

  preenche_matrizA(matA, 4, 5);
  preenche_matrizB(matB, 5, 3);

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      soma = 0;
      for (k = 0; k < 5; k++) {
        soma += matA[i][k] * matB[k][j];
      }
      matC[i][j] = soma;
    }
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      if (j == 0) {
        printf("[ %i", matC[i][j]);
      } else {
        if (j == 2) {
          printf(", %i ]\n", matC[i][j]);
        } else {
          printf(", %i", matC[i][j]);
        }
      }
    }
  }

  return 0;
}

void preenche_matrizA(int mat[][5], int x, int y) {
  int i, j;
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      mat[i][j] = rand() % 10;
    }
  }
}

void preenche_matrizB(int mat[][3], int x, int y) {
  int i, j;
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      mat[i][j] = rand() % 10;
    }
  }
}