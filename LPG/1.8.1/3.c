/*Dado um vetor de inteiros, faça a busca binária de um valor (chave).
O programa deverá pedir que o usuário indique o número de elementos para o vetor. Use uma função
para inserir valores aleatórios no vetor. Com outra função, mostre os valores na tela os valores
aleatórios inseridos. Após isso, permita que o usuário digite um valor que deseja buscar no vetor.
Escreva uma função que recebe o vetor v, sua capacidade n e a chave de busca. A função deve fazer a
busca binária e indicar o índice no qual encontrou a chave. Lembre-se que a busca binária ocorre em
um vetor ordenado e será necessário fazer a ordenação antes da busca.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preenche_vetor_rand(int t,int vet[t]);
void mostra_vetor(int t,int vet[t]);
void ordena_vetor(int t,int vet[t],char ordem);
int busca_binaria_chave(int t,int vet[t],int chave);

int main(){
    srand(time(0));
    int t, chave;
    char ordem = 'c';

    printf("Digite o número de elementos do vetor: \n");
    scanf("%d", &t);

    int vet[t];

    preenche_vetor_rand(t, vet);
    ordena_vetor(t, vet, ordem);

    printf("\nVetor ordenado: \n");
    mostra_vetor(t, vet);

    printf("\nDigite o valor que desejas buscar: \n");
    scanf(" %d", &chave);
    
    if(busca_binaria_chave(t, vet, chave) < 0){
        printf("\nValor não encontrado.\n");
    }else{
        printf("\nValor encontrado na posição %d .\n", busca_binaria_chave(t, vet, chave));
    }
    return 0;
}
void preenche_vetor_rand(int t,int vet[t]){
    for(int x = 0; x < t; x++){
        vet[x] = rand() % 100;
    }
}
void mostra_vetor(int t,int vet[t]){
    for(int x = 0; x < t; x++){
        printf("%d ", vet[x]);
    }
}
void ordena_vetor(int t,int vet[t],char ordem){
    if(ordem == 'c'){
        for(int z = 0; z < t - 1; z++){
            int temp = z;
            for(int x = z + 1; x < t; x++){
                if(vet[x] < vet[temp]){
                    temp = x;
                }        
            }
            int aux = vet[z];
            vet[z] = vet[temp];
            vet[temp] = aux;
        }
    }else if(ordem == 'd'){
        for(int z = 0; z < t - 1; z++){
            int temp = z;
            for(int x = z + 1; x < t; x++){
                if(vet[x] > vet[temp]){
                    temp = x;
                }        
            }
            int aux = vet[z];
            vet[z] = vet[temp];
            vet[temp] = aux;
        }
    }else{
        printf("Opção inválida.\n");
    }
}
int busca_binaria_chave(int t,int vet[t],int chave){
    if(t == -1){
        return -1;
    }
    if(vet[t] == chave){
        return t;
    }
    return busca_binaria_chave(t-1, vet, chave);
}