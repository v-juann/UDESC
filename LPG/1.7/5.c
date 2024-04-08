/*Implemente a versão recursiva da função que faz a busca sequencial em um vetor. Protótipo da função:
int busca_seq_rec(int v[], int n, int chave);*/
#include<stdio.h>

int busca_seq(int v[], int n, int chave){
    if(n == -1){
        return -1;
    }
    if(v[n] == chave){
        return n; 
    }
    return busca_seq(v, n - 1, chave); // Não encontrado!
}

int main(){
    int n, chave;

    printf("Digite a quantidade de elementos do vetor: \n");
    scanf("%d", &n);

    int v[n];

    for(int x = 0; x < n; x++){
        printf("Digite o elemento %d do vetor: \n", x + 1);
        scanf("%d", &v[x]);
    }

    printf("Digite a chave de busca: \n");
    scanf("%d", &chave);

    if(busca_seq(v, n, chave) == -1){
        printf("Não encontrado.");
    }else{
        printf("Encontrado na posição %d.", busca_seq(v, n, chave));
    }
    return 0;
}