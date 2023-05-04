/* Luciana Roncarati 20210910
Questao 17 Programa que receba um vetor de n numeros inteiros .
O programa deve informar os valores que se repetem e a quantidade de vezes que cada um
se repete.*/



#include<stdio.h>
#include<stdlib.h>

 int main(void){

    int *num = NULL;
    int cont=0,i,j,n;

printf( "____________________________________________________");
printf("\nDigite quantidade de numeros que deseja comparar:\n ");

scanf("%d",&n);
printf("\nDigite os numeros:\n");

//alocacao dinamica de vetor de n elementos de inteiros
num = (int*)malloc(n*sizeof(int));


if (num==NULL){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}

//preenche vetor
for(i=0;i<n;i++){
scanf("%d",&num[i]);
}
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++) {
            if (num[i] == num[j]) {
            printf("Valor repetido :%d: nos indices %d e %d", num[i], i, j);
                for (j=j+1;j<n;j++) {
                    if (num[i] == num[j]) {
                        printf(" e %d", j);
                    }
                }
                printf("\n");
            }
        }
    }

getchar();
return 0;}
