/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que
o mesmo pode começar em um dia e terminar em outro, tendo uma duração máxima de 24
horas.
Entrada
Dois números inteiros representando o início e o fim do jogo.
Saída
Mostre a duração do jogo conforme exemplo abaixo.*/
#include<stdio.h>

int main(){
int h1, h2, v1, v2, res;

printf("Digite o valor referente a hora inicial e final do jogo.\n");
scanf("%d%d", &h1, &h2);

v1 = 24 - h1;
v2 = 24 - h2;

res = v1 - v2;

if (res < 0){
    res = res * (-1);
}

printf("O jogo durou %d horas.",res);

return 0;
}