/*Dado o vetor V, definido por:
int V[100];
 Faça um programa que execute os seguintes passos
a) preencha todos os elementos do vetor com o valor 71;
b) mostre os 100 valores contidos no vetor, uns ao lado dos outros
c) preencha o vetor com os números inteiros 1, 2, 3..., 100;
d) mostre os 100 valores contidos no vetor, uns embaixo dos outros
e) preencha o vetor: com 1 em V[i], caso i seja um quadrado perfeito, e com 0 nos demais casos.
f) mostre os 100 valores contidos no vetor, uns ao lado dos outros*/
#include<stdio.h>
#include<math.h>

int main(){
    int V[100];

    for(int n = 0; n < 100; n++){
        V[n] = 71;
    }

    for(int n = 0; n < 100; n++){
        printf("%d ", V[n]);
    }

    for(int n = 0; n < 100; n++){
        V[n] = n + 1;
    }

    for(int n = 0; n < 100; n++){
        printf("%d\n", V[n]);
    }

    for(int n = 0; n < 100; n++){
        int quad = (int)(sqrt(n + 1));
        if((sqrt(n + 1)) / quad == 1){
            V[n] = 1;
        } else{
            V[n] = 0;
        }
    }

    for(int n = 0; n < 100; n++){
        printf("%d ", V[n]);
    }

    return 0;
}