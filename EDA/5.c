/*Run-length encoding (RLE) é uma forma simples de compressão de textos. A ideia
desta técnica é representar caracteres repetidos sucessivamente com um contador
seguido pelo caractere. Dada uma string, retorne o texto resultante da aplicação da
técnica RLE.
○ Exemplo, dada a string "AAAABBBCCDAA", a saída compactada deve ser "4A3B2C1D2A"*/
#include<stdio.h>
#include<string.h>

int main(){
    char string[10];
    int cont = 1;

    printf("Digite uma cadeia de até 10 caracteres:\n");
    scanf(" %s",string);
    
    for(int i = 1; i <= strlen(string); i++){
        if(string[i] == string[i-1]){
            cont++;
        } else{         
            printf("%d%c", cont, string[i-1]);            
            cont = 1;
        }
    }
    return 0;
}
