/*Modifique o código da questão anterior fazendo com que o programa determine quantas vezes o caractere
ocorre na string.*/
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
    int n = 0, cont = 0;
    for(int i = 0; i <= strlen(s); i++){
        s[i] == c ? cont++ : n++;
    }
    if(n == strlen(s) + 1){
        printf("Cadeia %s não possui o caractere %c.\n", s, c);
    }else{
        printf("Cadeia %s exibe o caractere %c %d vez(es).\n", s, c, cont);
    }
}