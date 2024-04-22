/*Dado um vetor de reais, faça a ordenação em ordem crescente ou decrescente.
O usuário poderá indicar a quantidade de elementos do vetor (que deve ser maior que zero). Os
elementos do vetor devem ser preenchidos com valores randômicos. Os valores do vetor devem ser
mostrados na tela usando uma função com VLA. Após isto, o usuário poderá indicar se quer a
ordenação dos valores do vetor em ordem crescente ou decrescente. Use uma única função (também
com VLA) para fazer a ordenação dos valores do vetor. Para isso, sugere-se o uso de um parâmetro
adicional indicando a ordem (‘c’=crescente e ‘d’=decrescente). Ao final, mostre os valores do vetor
após a ordenação.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preenche_vetor_rand(int t,int vet[t]);
void mostra_vetor(int t,int vet[t]);
void ordena_vetor(int t,int vet[t],char ordem);

int main(){
    srand(time(0));
    int t;
    char ordem;

    printf("Digite o número de elementos do vetor: \n");
    scanf("%d", &t);

    int vet[t];

    preenche_vetor_rand(t, vet);
    mostra_vetor(t, vet);

    printf("\nOrdenar por:\nC - Crescente\nD - Decrescente\n");
    scanf(" %c", &ordem);

    ordena_vetor(t, vet, ordem);
    mostra_vetor(t, vet);

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