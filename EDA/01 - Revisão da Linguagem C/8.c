/*Faça um programa que leia uma cadeia de caracteres e retorne uma nova cadeia de
caracteres invertida. Utilize uma função recursiva para realizar a inversão da sequência
de caracteres.
○ Exemplo, dado o termo "abc", a saída esperada é "cba".*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *inverte_string(char s[]);

int main(){
    char s[15];

    printf("Digite algo: \n");
    scanf(" %s", s);

    char *stringInvertida = inverte_string(s);
    
    printf("%s", stringInvertida);

    return 0;
}

char *inverte_string(char s[]){
    char *novaString = malloc(sizeof(char) * strlen(s));
    for(int i = 0; i < strlen(s); i++){
        novaString[i] = s[(strlen(s)-(i+1))];
    }
    novaString[strlen(s)] = '\0';
    return novaString;
}