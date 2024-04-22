/*Dado um vetor de inteiros, preencha-o com somatórios.
O programa deve permitir que o usuário indique a quantidade de elementos do vetor (que deve ser
maior que zero). Use uma função para preencher o vetor com o valor dos somatórios acumulados dos
índices dos vetores, conforme ilustrado abaixo:
0 1 2 3 4 5 6 7 8 9 10 ...
0 1 3 6 10 15 21 28 36 45 55 ...
Após preencher o vetor com os somatórios, mostre os valores dos elementos na tela, também usando
uma função. Use VLA, tanto na declaração do vetor quanto nas funções. Sugestões de protótipos para
as funções*/
#include<stdio.h>

void preenche_vetor_somatorio(int n, int vetor[n]);
void mostra_vetor(int n, int vetor[n]);

int main(){
    int n;
    do{
        printf("Digite a quantidade de elementos do vetor: \n");
        scanf("%d", &n);   
    } while(n <= 0);
    
    int vetor[n];
    preenche_vetor_somatorio(n, vetor);
    mostra_vetor(n, vetor);

    return 0;
}

void preenche_vetor_somatorio(int n,int vetor[n]){
    vetor[0] = 0;
    for(int x = 1; x < n; x++){
        vetor[x] = x + vetor[x-1];
    }
}
void mostra_vetor(int n,int vetor[n]){
    for(int x = 0; x < n; x++){
        printf(" %d ", vetor[x]);
    }
}