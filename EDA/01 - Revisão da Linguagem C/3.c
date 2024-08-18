/*Números primos são os números naturais que têm apenas dois divisores distintos: 1 e
ele mesmo. Faça um programa que solicite um número natural, em seguida, informe o
número é primo ou não.
○ Exemplo 1, dado o termo 23, a saída esperada é sim.
○ Exemplo 2, dado o termo 77, a saída esperada é não.*/
#include<stdio.h>

int valida_primo(int n);

int main(){
    int n;

    printf("Digite o número a ser validado: \n");
    scanf("%d", &n);

    if(valida_primo(n) == 1){
        printf("sim\n");
    } else{
        printf("não\n");
    }

    return 0;
}

int valida_primo(int n){
    if(n == 1){
        return 0;
    }
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont == 2){
        return 1;
    }
    return 0;
}