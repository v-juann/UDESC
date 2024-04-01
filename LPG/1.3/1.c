/*Dados N e K, mostre na tela os N primos a partir de K. Por exemplo:
– Exemplo de Entrada: N = 5 e K = 10
– Exemplo de Saída: 11, 13, 17, 19, 23*/
#include<stdio.h>

int main(){
    int n, k, primo;

    printf("Digite o valor de N e K, respectivamente: ")/
    scanf("%d%d", &n, &k);

    for(primo = 0; primo < n; k++){
        int cont = 0;
        for(int x = 1; x <= k; x++){
            if((k % x) == 0){
                cont++;
            }
        }
        if (cont == 2){
            printf("%d\n", k);
            primo++;
        }
    }
    return 0;
}