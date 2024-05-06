/*Crie uma função que recebe uma string s e um caractere c, e apague todas as ocorrências de c em s.
Exemplo:
Entrada: s = "amo programar" e c= 'a'
Saída: s = "mo progrmr"*/
#include<stdio.h>
#include<string.h>

void apaga_char(char letra, char string[]);

int main(){
    char string[15];
    char letra;

    printf("Digite uma cadeia de caracteres: \n");
    fgets(string, 15, stdin);
    printf("Digite o caractere que deseja remover desta cadeia: \n");
    scanf(" %c", &letra);

    apaga_char(letra, string);

    printf("%s", string);

    return 0;
}

void apaga_char(char letra, char string[]){
    for(int x = 0; x < strlen(string); x++){
        if (string[x] == letra){
            for(int z = x; z < strlen(string); z++){
                string[z] = string[z+1];
            }
        }
    }
}