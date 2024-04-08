/*Escreva uma função que recebe um vetor v e um inteiro n. A função deve gerar o n termos de sequência de
Fibonacci dentro de v. Protótipo da função:
void vetor_fibonacci(int v[], int n);*/
#include<stdio.h>

int fibo(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

void vetor_fibonacci(int v[], int n){
    for(int x = 0; x < n; x++){
        v[x] = fibo(x + 1);
    }            
}

int main(){
    int n;

    printf("Digite a quantidade de elementos do vetor: \n");
    scanf("%d", &n);

    int v[n];

    vetor_fibonacci(v, n);

    for(int x = 0; x < n; x++){
        printf("%d, ", v[x]);
    }

    return 0;
}