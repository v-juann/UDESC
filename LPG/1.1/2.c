/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que
o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes
três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem
adequada:
• se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
• se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
• se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
• se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
• se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
• se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO
ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0<A) , B (0<B) e C
(0<C).
Saída
Imprima todas as classificações do triângulo especificado na entrada.*/

#include<stdio.h>

int main(){
float entrada, a = 0, b = 0, c = 0;

for(int x = 0; x < 3; x++){
    printf("Digite o valor de um dos lados: \n");
    scanf("%f", &entrada);
    if(entrada > a){
        b = a;
        c = b;
        a = entrada;
    } else if(entrada > b){
        c = b;
        b = entrada;
    } else{
        c = entrada;
    }
}
if(a >= b + c){
    printf("Não forma triângulo!\n");
    return 0;
} else{
    
    if(( a * a ) == ( b * b ) + ( c * c )){
        printf("Triângulo retângulo.");
    }
    if(( a * a ) > ( b * b ) + ( c * c )){
        printf("Triângulo obtusângulo.");
    }
    if(( a * a ) < ( b * b ) + ( c * c )){
        printf("Triângulo acutângulo.");
    }
    if(a == b && b == c){
        printf("Triângulo equilátero.");
    }else if(a == b || b == c || a == c){
        printf("Triângulo isósceles.");
    }
}
return 0;
}