/*Faça um programa que, dados k e n, mostre na tela os n primeiros números primos acima de k. A
verificação do número (se é ou não é primo) deve ser feita através de uma função.*/
#include<stdio.h>
int valida_primo(int k, int x){
    if((k % x) == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n, k, primo;

    printf("Digite o valor de N e K, respectivamente: ")/
    scanf("%d%d", &n, &k);

    for(primo = 0; primo < n; k++){
        int cont = 0;
        for(int x = 1; x <= k; x++){
                cont += valida_primo(k, x);
        }
        if (cont == 2){
            printf("%d\n", k);
            primo++;
        }
    }
    return 0;
}