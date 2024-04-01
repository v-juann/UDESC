/*Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada
caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente
a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro
valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
Entrada
A entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um
caso de teste com três valores reais.
Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo
abaixo.*/
#include<stdio.h>

int main(){
    int n;
    float r1, r2, r3, mediaPond;

    printf("Digite o número de linhas: \n");
    scanf("%d", &n);

    for(int x = 0; x < n; x++){
        printf("Digite os 3 número reais: \n");
        scanf("%f%f%f",&r1,&r2,&r3);

        mediaPond = ((r1 * 2) + (r2 * 3) + (r3 * 5)) / 10;
        printf("%.2f\n",mediaPond);
    }
    return 0;
}