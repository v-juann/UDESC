/*Faça uma função que recebe 2 parâmetros, x e y, e calcule a soma dos números impares entre eles
(sem contar com eles mesmos). Repare que a função deve levar em conta de que x pode ser maior
do que y. Por exemplo, para x = 6 e y = -5, temos a seguinte soma (em ordem crescente): -3 + (-1) +
1 + 3 + 5 = 5. Outro exemplo: para x = 3 e y = 10 temos 5 + 7 + 9 = 21.*/
#include<stdio.h>
int soma_imps(int n1, int n2){
    if(n2 < n1){
        int placeholder = n1;
        n1 = n2;
        n2 = placeholder;
    }
    int somaImps = 0;

    for(int x = n1+1; x < n2; x++){
        if((x % 2) != 0){
            somaImps += x;
        }      
    }
    return somaImps;
}

int main(){
    int n1, n2;

    printf("Digite os dois números: \n");
    scanf("%d%d", &n1, &n2);

    printf("%d", soma_imps(n1, n2));

    return 0;
}