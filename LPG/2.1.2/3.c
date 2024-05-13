/*Faça uma função que calcula o perímetro e a área de um círculo, dado o raio.
void calcula_circulo(float raio, float *pPerimetro, float *pArea);*/
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main(){
    float raio, perimetro, area; 

    printf("Digite o valor do raio de um círculo: \n");
    scanf("%f", &raio);

    calcula_circulo(raio, &perimetro, &area);

    printf("Valor do perímetro do círculo: %.5f\nValor da área do círculo: %.5f", perimetro, area);
    
    return 0;
}
void calcula_circulo(float raio, float *pPerimetro, float *pArea){
   (*pPerimetro) = 2 * M_PI * raio; 
   (*pArea) = raio * raio * M_PI;
}