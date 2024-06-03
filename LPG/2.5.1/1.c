/*Faça um programa que aloque uma matriz quadrada dinamicamente, usando um ponteiro para ponteiro
(int**). O tamanho (ordem) da matriz deve ser informado pelo usuário. Após a entrada de dados, o
programa deve armazenar os valores da diagonal secundária em um vetor V (também alocado
dinamicamente), que por fim deve ser mostrado na tela. A geração do vetor V deve ser feita através da
função a seguir:
int *diagonal_secundaria( int **matriz, int ordem );*/
#include<stdio.h>
#include<stdlib.h>

int *diagonal_secundaria( int **matriz, int ordem );

void preenche_matriz(int **matriz, int ordem);

int main(){    
    int ordem;

    printf("Digite a ordem da matriz: \n");
    scanf("%d", &ordem);

    int **matriz = malloc(sizeof(int*) * ordem);

    preenche_matriz(matriz, ordem);    

    int *diagonal = diagonal_secundaria(matriz, ordem);
    return 0;
}

int *diagonal_secundaria( int **matriz, int ordem ){
    int *diag = malloc(sizeof(int)*ordem);    
        for(int z = 0; z < ordem; z++){
            *(diag + z) = matriz[z][ordem-z];             
        }
    return diag;
}

void preenche_matriz(int **matriz, int ordem){
    for(int x = 0;x < n; x++){
        for(int y = 0;y < n; y++){
            printf("Digite o valor %d da linha %d :\n", x+1, y+1);
            scanf("%d", matriz[x][y]);
        }
    }
}