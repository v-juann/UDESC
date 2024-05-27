/*Escreva uma função que recebe como parâmetros uma string s e um inteiro n, e retorna nova
string nova contendo s repetida n vezes. Por exemplo, s = “Abc” e n = 4 tem como resultado a
string “AbcAbcAbcAbc”. Faça o programa principal chamando a função. Protótipo da função:
char *repetidor( char *s, int n );*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *repetidor(char *s, int n);

int main(){
    int n;
    char string[99];

    printf("Digite algo: \n");
    scanf("%s", string);

    printf("Digite a quantidade de vezes que essa string será repetida: \n");
    scanf("%d", &n);

    char *novaString = repetidor(string, n);

    printf("%s", novaString);
    
    return 0;
}

char *repetidor(char *s, int n){
    int cont = 0;
    char *copiaString = malloc(strlen(s)*n);

    for(int x = 0; x < n; x++){
        for(int y = 0; y < strlen(s); y++){
            copiaString[cont] = s[y];
            cont++;
        }
    }
    copiaString[cont] = '\0';

    return copiaString;
}