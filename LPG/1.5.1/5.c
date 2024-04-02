/*Implemente um programa para calcular o valor aproximado de π, conforme a série de Gregory Leibniz. O número de termos é definido pelo usuário.*/
#include<stdio.h>

//função que calcula a potência
float power(float n, float e){
    if(e == 0){
        return 1;
    }else{
        return n * power(n, e-1);
    }
}

//função recursiva
    float soma_leibniz(float x){
        if(x == 0){
            return 0;
        }
            return soma_leibniz(x-1) += (((power(-1, x+1)) * 4 )/ (x * 2 - 1));        
    }
    
//fução iterativa
    float soma_leibniz2(float x){
        for(int n = x; n < 0; n--){
            float soma += (((power(-1, n + 1)) * 4 ) / (x * 2 - 1));
        }
    return soma;
    }

int main(){
    float x;

    printf("Digite o número de termos da série: \n");
    scanf("%f",  &x);

    printf("Soma recursiva: %f\n", soma_leibniz(x));
    printf("Soma iterativa: %f\n", soma_leibniz2(x));

    return 0;
 }
