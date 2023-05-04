#include<stdio.h>
#include<stdlib.h>
#define MAX 20
/*
 *Q6 - Escreva um programa que receba n duplas de numeros inteiros e determine se o segundo ́e múltiplo do primeiro. Escreva uma função multiplo que receba dois números inteiros e retorne 1 se o segundo for múltiplo do primeiro ou 0 em caso contrário.
 */

int Num_Mult(const int,int[],int[]);

int main(void){
    int n,j,num1[MAX], num2[MAX], multi;
    int Num_mult(int num1[],int num2[]);
    multi = Num_mult(num1[j], num2[j]);

printf("\n Quantos pares de numeros?: ");
scanf("%d", &n);

if (n<0){
  printf  ("Erro!!");
  exit -1;
}
while (j<n){
        j++;
printf("Informe os 2 numeros:\n");
scanf("%d",&num1[j]);
scanf("%d",&num2[j]);
num1[j]++;
num2[j]++;}

for (j=0;j<n;j++){
multi;
}
printf("____");
;}

int Num_mult(int a[],int b[]){
int i, m;
        for (i=0;i<m;i++)
        if ((b[i]%a[i])!=0){
        return 1;
        printf("nao multiplos");}
            else
            printf(" nao multiplos");
            return 0;}



