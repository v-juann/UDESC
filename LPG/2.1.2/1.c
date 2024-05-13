/*Faça uma função que recebe dois números, a e b. A função deve incrementar a e decrementar b. 
void inc_dec (int *a, int *b); */
#include<stdio.h>

void inc_dec (int *a, int *b);

int main(){
    int a, b;

    printf("Digite o valor de A e B, respectivamente: \n");
    scanf("%d%d", &a, &b);

    inc_dec(&a, &b);

    printf("Valores incrementados:\n%d, %d.\n", a, b);

    return 0;
}
void inc_dec (int *a, int *b){
    (*a)++;
    (*b)++;
}