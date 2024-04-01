/*Escreva uma função que calcula o somatório dos n termos que são múltiplos de k a partir de x. Os
parâmetros são determinados pelo usuário e a função é chamada pelo programa principal, que
em seguida mostra o resultado na tela. Exemplo: para n = 3, k = 4 e x = 18, temos, 20 + 24 + 28 =
72. Protótipo da função:
int soma_especial(int n, int k, int x);*/
#include<stdio.h>

int cont = 0, soma = 0;

int soma_especial(int n, int k, int x){
    if (cont == n){
        return soma;
    }else{   
        if(x % k == 0){
            cont++;
            soma += x;
        }
        return soma_especial(n, k, x+1);
    }    
}

int main(){

    int n, k, x;

    printf("Digite os três parâmetros: (n, k, x): \n");
    scanf("%d%d%d", &n, &k, &x);

    printf("%d", soma_especial(n, k, x));

    return 0;
}