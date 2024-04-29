/*Escreva um programa que converta uma string que contém somente dígitos em um valor inteiro (variável
int).*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[15];
    int cont = 0, digitos = 0, m = 1;

    printf("Digite algo:\n");
    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 48 && str[i] <= 57){
          cont++;
        }
    }
    if(cont == strlen(str)){        
        for(int i = strlen(str) - 1; i >= 0 ; i--){
          digitos += ((str[i] - 48) * m);
          m = m * 10;
        }
        printf("Os digitos são: %d\n", digitos);
    }else{
      printf("Esta cadeia de caracteres não possui apenas dígitos.\n");
    }
}   