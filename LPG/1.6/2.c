/*Escreva um programa que leia um vetor A de 10 elementos reais. Após isso,
 construa e imprima um outro vetor B formado da seguinte maneira:
- os elementos de índice par são os correspondentes de A divididos por 2;
- os elementos de índice ímpar são os correspondentes de A multiplicados por 3.*/
#include<stdio.h>

int main(){
    float a[10];

    for(int n = 0; n < 10; n++){
        printf("Digite o valor %d : \n", n + 1);
        scanf("%f", &a[n]);
    }

    float b[10];
    for(int n = 0; n < 10; n++){
        if(n % 2 == 0){
            b[n] = a[n] / 2;
        }else{
            b[n] = a[n] * 3;
        }
    }

    for(int n = 0; n < 10; n++){
        printf("Valor %d : %f\n", n + 1, b[n]);
    }

    return 0;
}