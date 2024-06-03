/*Faça um programa que leia uma certa quantidade de inteiros que são armazenados num vetor v. 
A  quantidade  NÃO  será  indicada  previamente  pelo  usuário  e  o  programa  deve  alocar/realocar 
espaço para v, sempre que necessário. À medida que os valores são digitados e armazenador no 
vetor  v,  o  programa  também  deve  armazenar  os  valores  positivos  em  um  vetor  vp  e  o  valores 
negativos no vetor vn. Da mesma forma como ocorre com o vetor v, os dois outros vetores (vp e 
vn)  devem  ser  alocados  dinamicamente.  Os  vetores  vp  e  vn  não  devem  conter  zeros.  A  cada 
digitação de um novo valor, o programa deve perguntar se o usuário deseja digitar outro número. 
A digitação encerra quando a resposta do usuário é negativa. Ao final, imprima os três vetores.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *v = NULL, *vp = NULL, *vn = NULL;
    int x = 0, cont = 0, contVp = 0, contVn = 0;

    do{
        printf("Digite um valor negativo para encerrar, ou positivo para inserir mais um valor: \n");
        scanf("%d", &x);

        if(x < 0){
            break;
        }        
        cont++;
        v = realloc(v, sizeof(int)*cont);

    printf("Digite o valor %d:\n", cont);
    scanf("%d", &v[cont-1]);

    if(v[cont-1] > 0){
        contVp++;
        vp = realloc(vp, sizeof(int)*contVp);
        vp[contVp-1] = v[cont-1];
    }
    if(v[cont-1] < 0){
        contVn++;
        vn = realloc(vn, sizeof(int)*contVn);
        vn[contVn-1] = v[cont-1];
    }    
    }while(x > 0);
    printf("------VETOR------\n\n");
    for(int k = 0; k < cont;k++){
        printf(" %d ", *(v+k));        
    }
    printf("\n\n----POSITIVOS----\n\n");
    for(int k = 0; k < contVp;k++){
        printf(" %d ", *(vp+k));      
    }
    printf("\n\n----NEGATIVOS----\n\n");
    for(int k = 0; k < contVn;k++){
        printf(" %d ", *(vn+k));      
    }
    return 0;
}