/*Escreva uma função remove todos os espaços no início e no final de uma string (processo é chamado de
trimming).*/
#include<stdio.h>
#include<string.h>

void trim(char srt[]);

int main(){
    char srt[30];

    printf("Digite algo:");
    fgets(srt, 30, stdin);
  
    trim(srt);

    printf("%s", srt);

    return 0;
}

void trim(char srt[]){    
    int cont = 0;
    for(int k = 0; k < 30; k++){
        if(srt[k] == ' '){
            cont ++;
        }else{
            break;
        }
    }
    for(int k = 0; k < 30; k++){
        srt[k] = srt[k + cont];
        srt[k + cont] = '\0';
    }
    for(int x = (strlen(srt) - 2); x >= 0; x--){
        if (srt[x] == ' '){
            srt[x] = '\0';
        } else {
            break;
        }
    }
}