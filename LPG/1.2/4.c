/*Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso
de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares
existentes entre X e Y.
Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem
a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.
Saída
Imprima a soma de todos valores ímpares entre X e Y.*/
#include<stdio.h>

int main(){
    int n1, n2, cont, somaImps = 0;

    printf("Digite o número de casos: \n");
    scanf("%d", &cont);
   
        for(int x = 0; x < cont; x++){
            printf("Digite os dois números: \n");
            scanf("%d%d", &n1, &n2);

            if(n2 < n1){
                int placeholder = n1;
                n1 = n2;
                n2 = placeholder;
            }
            
            for(int x = n1+1; x < n2; x++){
                if((x % 2) != 0){
                    somaImps = somaImps + x;
                }      
            }
            printf("%d\n", somaImps);
            somaImps = 0;
        }
    return 0;
}