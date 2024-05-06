/*Escreva um programa que leia uma cadeia de caracteres no formato "DD/MM/AAAA" e copie o dia, mês e
ano para 3 variáveis inteiras. Antes disso, o programa deve verificar se o formato está correto, ou seja, se as
barras estão no lugar certo, e se D, M e A são dígitos.*/
#include<stdio.h>
#include<string.h>

int verifica_data(char data[]);

int main(){
    char data[10];
    int d = 0, m = 0, a = 0;

    do{
        printf("Digite uma data no formato DD/MM/AAAA: \n");
        scanf("%s", data);

        if(verifica_data(data) == 0){
            printf("Formato inválido! Favor digitar novamente: \n");
        }
    } while(verifica_data(data) == 0);

    d = ((data[0] - '0') * 10) + (data[1] - '0');
    m = ((data[3] - '0') * 10) + (data[4] - '0');
    a = ((data[6] - '0') * 1000) + ((data[7] - '0') * 100) + ((data[8] - '0') * 10) + (data[9] - '0');

    printf("%s\n", data);

    printf("Dia: %d\nMês: %d\nAno: %d\n",d ,m ,a);

    return 0;
}

int verifica_data(char data[]){
    int cont = 0;
    for(int x = 0; x < 10; x++){
        if (data[x] >= '0' && data[x] <= '9'){
            cont++;
        }else if(x == 2 || x == 5){
            if (data[x] == '/'){
                cont++;
            }
        }
    }
    if (cont == 10){
        return 1;
    }
    return 0;
}