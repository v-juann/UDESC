/*Dado uma matriz quadrada m de números inteiros e de tamanho n, calcule a soma das
diagonais principal e secundária.
○ Exemplo, dado
m = [
[1, 2, 3, 4],
[4, 3, 2, 1],
[7, 8, 9, 6],
[6, 5, 4, 3]
], a saída esperada é 16 e 20*/
#include<stdio.h>
#include<time.h>

int main(){
    int n;
    printf("Digite o valor N para a matriz: \n");
    scanf("%d", &n);

    int mat[n][n];

    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            mat[x][y] = rand() % 10;
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }

    int c = 0, soma = 0;
    for(int z = 0; z < n; z++){
        soma += mat[c+z][c+z];
    }
    printf("%d\n", soma);
    
    return 0;
}
