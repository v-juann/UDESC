/*Escreva uma função que recebe dois vetores de mesma capacidade n e compara se os mesmos são iguais,
ou seja, se contêm os mesmos valores e na mesma ordem. A função deve ser booleana, ou seja, se forem
iguais retorna 1, caso contrário retorna 0. Protótipo da função:
int vetores_iguais(float a[], float b[], int n);*/
#include<stdio.h>

int vetores_iguais(float a[], float b[], int n){
    if(n == 0){
        return 1;
    }
    if(a[n - 1] != b[n - 1]){
        return 0;
    }    
    return vetores_iguais(a, b, n - 1);
}

int main(){
    int n;

    printf("Digite a quantidade de elementos dos vetores: \n");
    scanf("%d", &n);

    float a[n], b[n];

    for(int x = 0; x < n; x++){
        printf("Digite o elemento %d do primeiro vetor: \n", x + 1);
        scanf("%f", &a[x]);
    }
    for(int x = 0; x < n; x++){
        printf("Digite o elemento %d do segundo vetor: \n", x + 1);
        scanf("%f", &b[x]);
    }

    printf("%d", vetores_iguais(a, b, n));

    return 0;
}