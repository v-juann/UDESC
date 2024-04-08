/*Faça uma função que recebe um vetor e sua capacidade como parâmetros e retorna o somatório dos
números primos contidos no vetor. Recomenda-se utilizar a função de verificação (se um número é primo
ou não) já implemetada. Protótipo:
int soma_primos(int v[], int n);*/
#include<stdio.h>

int primo(int n){
    if(n == 1 || n == 0){
        return 0;
    }
    for(int x = 2; x < n; x++){        
        if(n % x == 0){
            return 0;
        }
    }
    return n;
}

int soma_primos(int v[], int n){
    int soma = 0;
    for(int x = 0; x < n; x++){
        soma += primo(v[x]);
    }
    return soma;
};

int main(){
    int n;

    printf("Digite a quantidade de elementos do vetor: \n");
    scanf("%d", &n);

    int v[n];

    for(int x = 0; x < n; x++){
        printf("Digite o elemento %d do vetor: \n", x + 1);
        scanf("%d", &v[x]);
    }

    printf("Soma dos primos: %d ", soma_primos(v, n));
    
    return 0;
}