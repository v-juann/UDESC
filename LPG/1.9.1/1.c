/*Escreva uma função que implementa o comportamento da função strcat(), ou seja, dadas duas strings str1 e
str2, a função deve concatenar as duas strings e o conteúdo deve ficar em str1. Não utilize funções
predefinidas.*/
#include <stdio.h>
#include <string.h>

void concatena(char str1[], char str2[]);

int main() {
  char str1[30];
  char str2[30];

  printf("Digite a primeira palavra: \n");
  fgets(str1, 30, stdin);

  printf("Digite a segunda palavra: \n");
  fgets(str2, 30, stdin);
 
  concatena(str1, str2);

  printf("Essas palavras concatenadas formam: %s\n", str1);

  return 0;
}

void concatena(char str1[], char str2[]) {
    int z = 0;
    for(int i = strlen(str1) - 1; i < (strlen(str1) + strlen(str2)); i++){
        str1[i] = str2[z];
        z++;
    }  
}