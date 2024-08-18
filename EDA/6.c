/*Faça um programa que solicite dois números positivos e, em seguida, exiba o produto
destes números. Não utilize o operador aritmético *. Ao invés disso, utilize uma função
recursiva para realizar este cálculo.
○ Exemplo, dado os números aleatório 7 e 3, a saída é 21.*/
#include<stdio.h>

int soma_recursiva(int n, int m);

int main(){
    int x, y;
    
    printf("Digite dois números positivos:\n");
    scanf("%d%d", &x, &y);

    printf("%d", soma_recursiva(x, y));

    return 0;
}

int soma_recursiva(int n, int m){
    if(m == 0){
        return 0;
    }
    return n + soma_recursiva(n, m-1);
}