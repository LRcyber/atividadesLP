/*Escreva um programa em linguagem C que leia um conjunto de valores do arquivo vetor.txt.
Seu programa deve informar o maior elemento, o menor elemento e a mdia dos elementos.
O arquivo tem a estrutura:*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main (void){

    FILE *fptr;
    int i, val, maior=0, menor=0;
    float media,aux;


    if((fptr = fopen("vetorq1.txt","r"))==NULL){
        printf("Erro ao abrir o arquivo!!!\n");
        system("PAUSE");
        exit (-1);
    }
   while ( !feof( fptr ) ){
    fscanf (fptr,"%d",&val);
    aux+=aux;
    aux= aux/10;
for (i=0;i<10;i++){
    if (val>maior)
    maior=val;
    if (val<menor)
    menor=val;


}
}
    printf ("maior valor = %d\n", maior);
    printf ("menor valor = %d\n", menor);
    printf ("a media = %.2f\n", media);

fclose (fptr);
return 0;
}
