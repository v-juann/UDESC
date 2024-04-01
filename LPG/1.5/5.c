/*Faça um programa que mostre na tela os n termos da sequência de Fibonacci modificada,
considerando que os dois primeiros termos são: 2 e 2, respectivamente. Por exemplo, dado n = 5,
temos: 2, 2, 4, 6 e 10. A determinação do n-ésimo termo da sequência deve ser feita por uma
função recursiva que tem o seguinte protótipo:
int fibo(int n);*/
#include<stdio.h>

int somaFibo = 0;

int fibo(int n){
    if(n == 1 || n == 2){
        return 2;
    }else{
        somaFibo = fibo(n - 1) + fibo(n - 2);
        return somaFibo;
    }
}

int conta_fibo(int n){
    if(n == 1){
        printf("%d. ", fibo(n));
        return fibo(n);
    }else{ 
        printf("%d, ", fibo(n));
        return conta_fibo(n - 1);
    }
}

int main(){
    int n;

    printf("Digite o termo N: \n");
    scanf("%d", &n);

    conta_fibo(n);

    return 0;
}