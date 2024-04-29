/*Dados uma string s e um caractere c faça um programa que verifique se s contém c. Dica: a implementação
dentro de uma função facilita a definição da solução.*/
#include<stdio.h>
#include<string.h>

void verifica_string(char c, char s[]);

int main(){
    char s[15];
    char c;

    printf("Digite a string s: \n");
    scanf("%s", s);
    printf("Digite o caractere c: \n");
    scanf(" %c", &c);

    verifica_string(c, s);
  
    return 0;
}

void verifica_string(char c, char s[]){
    int n = 0;
    for(int i = 0; i <= strlen(s); i++){
        s[i] == c ? printf("Caractere %c encontrado na posição %d\n", c, i) : n++;
    }
    if(n == strlen(s) + 1){
        printf("Cadeia %s não possui o caractere %c.\n", s, c);
    }
}