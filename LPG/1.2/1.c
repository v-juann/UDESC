/*Leia N valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos
valores digitados foram ímpares, quantos valores digitados foram positivos e quantos
valores digitados foram negativos.
Entrada
A entrada contém o valor N, seguido de N valores inteiros quaisquer.
Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não
esquecendo o final de linha após cada uma.*/
#include<stdio.h>

int main(){

    int n, num, positivos = 0, negativos = 0, impares = 0, pares = 0;

    printf("Digite o número de dígitos: \n");
    scanf("%d", &n);

    for(int x = 0; x < n; x++){
        printf("Digite o número: \n");
        scanf("%d", &num);
            if(num < 0){
                negativos++;
            }
            if (num > 0){
                positivos++;
            }
            if((num % 2) == 0){
                pares++;
            }else{
                impares++;
            }            
    }

    printf("%d valor(es) par(es).\n",pares);
    printf("%d valor(es) ímpar(es).\n",impares);
    printf("%d valor(es) positivo(s).\n",positivos);
    printf("%d valor(es) negativo(s).\n",negativos);

    return 0;
}