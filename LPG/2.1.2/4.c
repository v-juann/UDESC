/*Faça uma função que receba um parâmetro (por valor) com o total de minutos passados ao longo do dia
e receba também dois parâmetros (referência) no qual deve preencher com o valor da hora e do minuto
corrente. 
Faça um programa que leia do teclado quantos minutos se passaram desde meia-noite e
imprima a hora corrente (use a sua função).
void cacula_hora(int totalMinutos, int *ph, int *pm);*/
#include<stdio.h>

void cacula_hora(int totalMinutos, int *ph, int *pm);

int main(){
    int totalMinutos, horas, minutos;

    printf("Digite a quantidade de minutos passados desde a meia-noite: \n");
    scanf("%d", &totalMinutos);

    cacula_hora(totalMinutos, &horas, &minutos);

    printf("Agora são %d Horas, %d Minutos.\n", horas, minutos);

    return 0;
}
void cacula_hora(int totalMinutos, int *ph, int *pm){
    (*ph) = totalMinutos / 60;
    (*pm) = totalMinutos % 60;
}