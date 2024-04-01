/* Faça um programa que leia um conjunto de 5 números inteiros que devem ser digitados pelo
usuário. Após isso, mostre os valores na tela, uns ao lado dos outros. Em seguida, faça com que os
números sejam invertidos de posição, ou seja, que o primeiro fique armazenado no lugar do último, o
segundo no lugar do penúltimo e assim por diante. Ao final, mostre novamente na tela os valores
contidos no vetor, uns ao lado dos outros.
Dica: use uma variável auxiliar para fazer a troca de posições.
// Exemplo abaixo troca os valores armazenados em V[0] e V[1] de lugar
auxiliar=V[0];
V[0]=V[1]
V[1]=auxiliar;*/
#include<stdio.h>

int main(){
    int a[5];
    int aux[5];

    for(int n = 0; n < 5; n++){
        printf("Digite o valor %d : \n", n + 1);
        scanf("%d", &a[n]);
    }

    for(int i = 0; i <= 5; i++){
        aux[i] = a[5-(i + 1)];
    }

    for(int i = 0; i < 5; i++){
        a[i] = aux[i];
        printf("%d ", a[i]);
    }
    return 0;
}
