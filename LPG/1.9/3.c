/*Escreva um programa que leia uma string e determina se a mesma é palíndrome, ou seja, se forma a mesma
sequência de caracteres quando lida de trás para frente. Ex.: ARARA.*/
#include<stdio.h>
#include<string.h>

void inverte_string(char s[], char sInvertida[]);

int main(){
    char s[15];
    char sInvertida[15];

    printf("Digite algo: \n");
    scanf(" %s", s);

    inverte_string(s, sInvertida);

    strcmp(s, sInvertida) == 0 ? printf("É palíndrome.\n") : printf("Não é palíndrome.\n");

    return 0;
}

void inverte_string(char s[], char sInvertida[]){
    for(int i = 0; i < strlen(s); i++){
        sInvertida[i] = s[(strlen(s)-(i+1))];
    }
}