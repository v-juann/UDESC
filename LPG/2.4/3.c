/*Escreva uma função que realiza a união entre dois conjuntos de inteiros contidos nos vetores v1 
e v2. A função recebe os vetores e suas respectivas capacidades (n1 e n2) como parâmetros de 
entrada e retorna o endereço do vetor alocado (contendo a união entre v1 e v2). Além disso, há 
um parâmetro passado por referência (ponteiro p3), que serve para “retornar” a capacidade do 
vetor  gerado.  Faça  o  programa  principal  invocando  a  função  (a  estrutura  do  programa  é 
semelhante ao exemplo dado em aula – intersecção). Protótipo da função: 
 
int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RANDOM (rand()% 10)

int *gera_vetor(int n);

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );

int main(){
    int n1, n2;

    printf("Digite o tamanho do primeiro vetor: \n");
    scanf("%d", &n1);
    printf("Digite o tamanho do segundo vetor: \n");
    scanf("%d", &n2);
    
    int *vet1 = gera_vetor(n1);
    int *vet2 = gera_vetor(n2);
    int *tamanho = NULL, *vet3 = NULL;

    vet3 = uniao(vet1, n1, vet2, n2, tamanho);



    return 0;
}

int *gera_vetor(int n){
    int *vet = malloc(sizeof(int)*n);
    for(int x = 0;x < n;x++){       
        vet[x] = RANDOM;
        printf("%d ", vet[x]);
    }
    return vet;
}

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
    int *new = malloc(sizeof(int)*(*p3));
    for(int x = 0;x < *p3;x++){
        for(int y = 0;y < *v2;y++){
            if(v1[x] == v2[y]){
                *(new+x) = 0;
            }
        }
    }
}