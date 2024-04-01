/*Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre
eles.
Entrada
Dois valores inteiros.
Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que
estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
Exemplo de Entrada Exemplo de Saída
6
-5
5*/
#include<stdio.h>

int main(){
    int n1, n2, somaImps = 0;

    printf("Digite os dois números: \n");
    scanf("%d%d", &n1, &n2);

    if(n2 < n1){
        int placeholder = n1;
        n1 = n2;
        n2 = placeholder;
    }
    
    for(int x = n1+1; x <= n2; x++){
        if((x % 2) != 0){
            somaImps = somaImps + x;
        }      
    }
    printf("%d", somaImps);

    return 0;
}