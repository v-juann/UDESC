/*Faça um programa que leia uma cadeia de caracteres e converta todos os caracteres que forem letras
minúsculas para letras maiúsculas. Dica: é preciso fazer uma subtração no código do caractere. Verifique na
tabela ASCII e veja qual valor deve ser usado.*/
#include<stdio.h>
#include<string.h>

void transforma_minuscula(char string[]);

int main(){
    char string[15];

    printf("Digite algo: \n");
    scanf("%s", string);

    transforma_minuscula(string);

    printf("%s", string);
    
    return 0;
}

void transforma_minuscula(char string[]){
    for(int x = 0; x < strlen(string); x++){
        if (string[x] >= 97 && string[x] <= 122){
            string[x] -= 32;
        }
    }
}