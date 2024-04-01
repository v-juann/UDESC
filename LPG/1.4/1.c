/*Faça um programa que lê os três lados de um triângulo e determina o seu tipo, conforme códigos a
seguir. Os códigos devem ser retornados por uma função de tipo int, que recebe os lados do
triângulo como parâmetro. Protótipo da função:
int tipo_triangulo(float, x, float y, float z);
O retorno da função deve ser conforme os códigos a seguir:
0. Os lados não formam um triângulo (ou seja, a soma de dois deles é menor ou igual ao outro
lado);
1. Triângulo equilátero;
2. Triângulo isóceles;
3. Triângulo escaleno.*/

#include<stdio.h>

int tipo_triangulo(float x, float y, float z){

    if(x >= y + z || y >= x + z || z >= x + y){
        return 0;
    } else{
        if(x == y && y == z){
            return 1;
        }else if(x == y || y == z || x == z){
            return 2;
        }else{
            return 3;
        }
    }
};

int main(){
    float x, y, z;


    printf("Digite o valor dos três lados do triângulo: \n");
    scanf("%f%f%f", &x, &y, &z);
    
    printf("%d", tipo_triangulo(x,y,z));

return 0;
}