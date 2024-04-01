/*Escreva um programa que informa se um caractere digitado pelo usuário representa um dígito de
0 a 9. A verificação deve ser feita por uma função booleana (int) que recebe um char como
parâmetro. Caso o caractere seja um dígito, converta-o para um valor inteiro e o armazene em uma
variável int. Em seguida, mostre o valor inteiro na tela.*/

#include<stdio.h>

int valida_digito(char a){
    int digito = ((int)a) - 48;
    if (digito <= 9 && digito >= 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char a;

    printf("Digite o dígito: \n");
    scanf("%c" , &a);

    printf("%d", valida_digito(a));

    return 0;
}