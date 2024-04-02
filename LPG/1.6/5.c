/*Fazer um programa que crie um vetor que contenha o número de dias de cada mês (veja exemplo
abaixo). O usuário deverá digitar um valor inteiro que representa o número de dias que se passaram
desde o início de 2022 e o programa deve dizer que data (dia e mês) de 2022 este valor representa.
Caso o usuário digite um número inválido (negativo, zero ou maior que 365), o programa deverá pedir
que ele digite novamente.
0 1 2 3 4*/
#include<stdio.h>

int main(){

    int meses[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int dias;

    printf("Digite o número de dias passado do ano: \n");
    scanf("%d", &dias);

    if(dias < 0 || dias > 365){
        printf("Quantidade inválida!");
    } else{        
        for(int i = 0; i < 12; i++){
            if(dias > meses[i] && dias < meses[i + 1]){
                printf("Mês: %d - ", i + 1);
                    switch(i + 1){
                        case 1:
                            printf("Janeiro");
                            break;
                        case 2:
                            printf("Fevereiro");
                            break;
                        case 3:
                            printf("Março");
                            break;
                        case 4:
                            printf("Abril");
                            break;
                        case 5:
                            printf("Maio");
                            break;
                        case 6:
                            printf("Junho");
                            break;
                        case 7:
                            printf("Julho");
                            break;
                        case 8:
                            printf("Agosto");
                            break;
                        case 9:
                            printf("Setembro");
                            break;
                        case 10:
                            printf("Outubro");
                            break;
                        case 11:
                            printf("Novembro");
                            break;
                        case 12:
                            printf("Dezembro");
                            break;
                        default:
                            printf("Mês inválido!!!");
                            break;
                    }
            }
        }
    }
    return 0;
}
