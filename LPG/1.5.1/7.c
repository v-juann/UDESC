/*Escreva um algoritmo que determine o valor aproximado do seno de x com base na série abaixo. O
número de termos da série bem como o valor de x são determinados pelo usuário. Nesta série, o
primeiro é denominado termo 0 (termo zero).*/
#include<stdio.h>

//função que calcula a potência
float power(float n, float e){
    if(e == 0){
        return 1;
    }   return n * power(n, e-1);
}

//função que calcula o fatorial
    float fat(float n){
    if(n == 0){
        return 1;
    }else{
        return n * fat(n-1);
    }
}

//função recursiva
    float soma_seno(float x, float y){
        if(y == 0){
            return 0;
        }
            return soma_seno(x, y - 1) + ( power(x, y) / fat((y* 2 - 1)));        
    }
    
//fução iterativa
    float soma_seno2(float x, float y){
        float soma = 0;
        for(int n = y; n < 0; n--){
            soma += ( power(x, y) / fat((y* 2 - 1)));  
        }
    return soma;
    }

int main(){
    float x, y;

    printf("Digite o valor de x: \n");
    scanf("%f",  &x);

    printf("Digite o número de termos da série: \n");
    scanf("%f",  &y);

    printf("Soma recursiva: %f\n", soma_seno(x, y));
    printf("Soma iterativa: %f\n", soma_seno2(x, y));

    return 0;
 }
