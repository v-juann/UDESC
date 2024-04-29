/*Escreva uma função que inverte a ordem dos caracteres de uma string.*/
#include<stdio.h>
#include<string.h>

void inverte_string(char s[]);

int main(){
    char s[15];

    printf("Digite algo: \n");
    scanf(" %s", s);

    inverte_string(s);
    
    printf("%s", s);

    return 0;
}

void inverte_string(char s[]){
    char aux;
    for(int i = 0; i < (strlen(s) / 2); i++){
        aux = s[(strlen(s)-(i+1))];
        s[(strlen(s)-(i+1))] = s[i];
        s[i] = aux;
    }
}