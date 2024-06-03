/*Considere um vetor v contendo n valores inteiros. Considere também uma chave de busca k (um 
valor inteiro) que se deseja procurar dentro do vetor v. Considere ainda que é possível encontrar 
de 0 a n ocorrências da chave k no vetor v.  
Crie uma função que retorna um vetor (alocado dinamicamente) com os índices em que a chave 
se  encontra  (que  sempre  deve  terminar  com -1).  A  função  deve  realocar  memória  sempre que 
encontrar um novo valor no vetor para armazenar o novo índice do valor encontrado. 
Sugere-se que o protótipo da função seja como a seguir: 
 
 int *busca_seq( int v[], int n, int  k );  
 
• Exemplo de entrada: v = {3, 6, 7, -1, 3, 12, 9, 8, 3, 17}              chave k = 3  
• Saída: vetor resultante = {0, 4, 8, -1}*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RANDOM (rand()% 10)

void preenche_vetor(int *vet, int n);

int *busca_seq(int v[], int n, int k, int *tam);

int main(){
    int *vet = NULL, *tamanho = NULL, chave, n = RANDOM;

    preenche_vetor(vet, n);

    printf("Digite um valor a ser buscado no vetor:\n");
    scanf("%d", &chave);

    int *novoVetor = busca_seq(vet, n, chave, tamanho);
    
    printf("Valor %d encontrado em: \n", chave);
    for(int z = 0; z < *tamanho; z++){
        printf("%d ", novoVetor[z]);
    }
    
    return 0;
}
void preenche_vetor(int *vet, int n){
    for(int x = 0;x < n;x++){
        vet = realloc(vet, (sizeof(int)*(x+1)));
        vet[x] = RANDOM;
        printf("%d ", vet[x]);
    }
}

int *busca_seq(int v[], int n, int k, int *tam){
    int cont = 0, *indices = NULL;

    for(int z = 0;z < n; z++){
        if(v[z] == k){
            indices = realloc(indices, sizeof(int)*(cont+1));
            *(indices+cont) = z;
            cont++;
        }
    }
    indices = realloc(indices, sizeof(int)*(cont+1));
    indices[cont] = -1;
    *tam = cont;
    return indices;
}