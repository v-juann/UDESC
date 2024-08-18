/*Faça um programa que leia uma cadeia de caracteres e, em seguida, o programa deve
retornar true se a cadeia forma um palíndromo, caso contrário deve retornar false.
○ Exemplo 1, dada a string "abcd", a saída esperada é false.
○ Exemplo 2, dada a string "abba", a saída esperada é true.*/
#include<stdio.h>
#include<string.h>

void inverte_string(char s[], char sInvertida[]);

int main(){
    char s[15];
    char sInvertida[15];

    printf("Digite algo: \n");
    scanf(" %s", s);

    inverte_string(s, sInvertida);
    strcmp(s, sInvertida) == 0 ? printf("true.\n") : printf("false.\n");

    return 0;
}

void inverte_string(char s[], char sInvertida[]){
    for(int i = 0; i < strlen(s); i++){
        sInvertida[i] = s[(strlen(s)-(i+1))];
    }
    sInvertida[strlen(s)] = '\0';
}