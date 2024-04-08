/*Escreva uma função que recebe um vetor v, sua capacidade n e uma chave de busca. A função também
recebe um vetor que vai armazenar os índices em que a chave se encontra em v. A função deve fazer a
busca de maneira sequencial e armazenar os índices em que a chave se encontra e preencher o resto do
vetor com -1. Os vetores v e indices devem ter a mesma capacidade. Protótipo da função:
void busca_todos(int v[], int n, int chave, int indices[]);*/
#include<stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]){
    for(int x = 0; x < n; x++){
        if(v[x] == chave){
            indices[x] = v[x];
        } else{
            indices[x] = -1;
        }
    }
}

int main(){
    int n, chave;

    printf("Digite a quantidade de elementos do vetor: \n");
    scanf("%d", &n);

    int v[n];
    int indices[n];

    for(int x = 0; x < n; x++){
        printf("Digite o elemento %d do vetor: \n", x + 1);
        scanf("%d", &v[x]);
    }

    printf("Digite a chave de busca: \n");
    scanf("%d", &chave);

    busca_todos(v, n, chave, indices);

    for(int x = 0; x < n; x++){
        printf("%d, ", indices[x]);
    }

    return 0;
}