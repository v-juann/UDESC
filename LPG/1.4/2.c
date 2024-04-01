/*Faça uma função que recebe três valores inteiros e retorna o maior valor. É preciso considerar que
pode haver dois (ou mesmo os três) parâmetros iguais como sendo o maior valor. Por exemplo, os
parâmetros poderiam ser 5, 8 e 8. Neste caso, a função deve retornar 8.*/
#include<stdio.h>

int a = 0, b = 0, c = 0;

int maior_valor(int entrada){
    
    if(entrada > a){
        b = a;
        c = b;
        a = entrada;
    } else if(entrada > b){
        c = b;
        b = entrada;
    } else{
        c = entrada;
    }

    return a;
}

int main(){
    int entrada, maiorValor;

    for(int x = 0; x < 3; x++){
        printf("Digite um dos valores: \n");
        scanf("%d", &entrada);
        maiorValor = maior_valor(entrada);
    }

    printf("Maior valor: %d", maiorValor);

    return 0;
}