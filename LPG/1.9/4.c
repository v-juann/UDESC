/*Faça um programa que verifica se uma string contém somente dígitos decimais (0 a 9).*/
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
        printf("Todos os caracteres são dígitos decimais.\n");        
    }else{
      printf("Esta cadeia de caracteres não possui apenas dígitos.\n");
    }
}   