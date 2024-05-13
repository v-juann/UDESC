/*Faça um programa que determine o menor valor de uma matriz 3x4, bem como suas coordenadas (linha
e coluna). Tal processamento deve ser feito por uma função que recebe a matriz e “retorna” o menor
elemento e suas coordenadas (i e j).
void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);*/
#include<stdio.h>

void preenche_matriz(float mat[3][4]);

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main(){
    int linha, coluna;
    float mat[3][4];
    float min;

    preenche_matriz(mat);

    min_matriz(mat, &min, &linha, &coluna);

    printf("O menor valor é: %.2f\n", min);
    printf("A posição do menor valor é: linha %d, coluna %d.", linha, coluna);

    return 0;
}

void preenche_matriz(float mat[3][4]){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 4; y++){
            printf("Digite o valor para a linha %d coluna %d: ", x, y);
            scanf("%f", &mat[x][y]); 
        }
    }
}

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
    float menor = mat[0][0];
    int linha = 0, coluna = 0;

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 4; y++){
            if(mat[x][y] < menor){
                menor = mat[x][y];
                linha = x;
                coluna = y;          
            }
        }
    }
    (*pMin) = menor;
    (*pI) = linha;
    (*pJ) = coluna;
}