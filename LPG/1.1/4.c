/*Leia o dia e o mês em que um evento irá ocorrer neste ano. A seguir calcule o número de
dias que passarão desde o início do ano (01 de janeiro) até o dia do evento. Considere o
número de dias precisos que há em cada mês e suponha que o ano não seja bissexto.
Entrada
Dois números inteiros representando o dia e o mês de ocorrência do evento.
Saída
Mostre o número de dias decorridos desde o início do ano até a ocorrência do evento.*/
#include<stdio.h>

int main(){

int dia, mes, contagem;

printf("Digite o dia do mês em que ocorrerá o evento: ");
scanf("%d", &dia);
    if(dia < 0 || dia > 31){
        printf("Dia inválido!");
        return 0;
    }

printf("Digite o mês em que ocorrerá o evento: ");
scanf("%d", &mes);
    if(mes < 0 || mes > 12){
        printf("Mês inválido!");
        return 0;
    }
switch(mes){
    case 1:
        contagem = 0;
        break;
    case 2:
        contagem = 31;
        break;
    case 3:
        contagem = 59;
        break;
    case 4:
        contagem = 90;
        break;
    case 5:
        contagem = 120;
        break;
    case 6:
        contagem = 151;
        break;
    case 7:
        contagem = 181;
        break;
    case 8:
        contagem = 212;
        break;
    case 9:
        contagem = 243;
        break;
    case 10:
        contagem = 273;
        break;
    case 11:
        contagem = 304;
        break;
    case 12:
        contagem = 334;
        break;
}

contagem = contagem + dia;

printf("%d Dia(s) do início do ano até o evento.",contagem);

return 0;
}