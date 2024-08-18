/*A série de Fibonacci é uma sequência de números inteiros, começando por 1 e 1, onde
cada termo subsequente corresponde à soma dos dois anteriores. Faça um programa
que solicite o n-ésimo termo da série e retorne o número correspondente ao termo por
meio de uma função recursiva.
○ Exemplo 1, dado o termo 7, a saída esperada é 13.
○ Exemplo 2, dado o termo 9, a saída esperada é 34. */
#include<stdio.h>

int fibo(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibo(n - 1) + fibo(n - 2);;
    }
}

int main(){
    int n;

    printf("Digite o termo N: \n");
    scanf("%d", &n);

    printf("%d", fibo(n));

    return 0;
}