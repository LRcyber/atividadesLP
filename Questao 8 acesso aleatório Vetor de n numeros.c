/*Escreva um programa que leia os elementos de um vetor de floats via teclado e escreva esses
elementos em um arquivo de acesso aleatrio. A quantidade de elementos do vetor n tambm
ser informada pelo usurio, coloque o valor de n na primeira linha do arquivo.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100


int main (void){
 int n, i ;
 float V[MAX];
 FILE*fptr;

 if ((fptr=fopen("vetor.dat", "wb"))==NULL){
    printf("ERRO!!");
 exit -1;}
 else
    printf("Digite o valor de N:");
    scanf("%d", &n);
    printf("Digite os valores de ponto flutuante do vetor:");
    for (i=0; i<n; i++){
    scanf("%f", &V[i]);
    }
    fwrite(&n, sizeof(int), 1, fptr);
    fwrite(&V, sizeof(float), 3, fptr);



return 0;}
