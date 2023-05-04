/* Luciana Roncarati mat 202010910
Questao 11
Programa que encontra o 1 maior o 2 maior e a multi de uma matriz de ponteiros de nxn
elementos */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(void)
{
    int n,i,j,maior1,maior2, mult=1, temp=0;
    int **A=NULL;



    printf("Enter com o valor n da Matriz quadrada n x n: ");
    scanf("%d",&n);

setlocale(LC_ALL, "Portuguese"); /* biblioteca locale */

// alocaççao dinamica da matriz
A = malloc (n*sizeof(int *));
if (A==NULL){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;}

    for(i=0;i<n;i++){
    A[i] = malloc (n*sizeof(int));
    if (A[i]==NULL){
    printf("Erro: Memoria insuficiente!!!\n");
    system("PAUSE");
    return -1;
}
}
//Entrada de dados
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("Digite o elemento A[%d][%d]: ", i+1, j+1);
    scanf("%d", &A[i][j]);
    }
}
// impressão da matriz
printf("\n\n Matriz %d x %d\n", n, n);
        for(i=0;i<n; i++) {
            for(j=0;j<n;j++){
                if (j!=n){
                printf("A[%d][%d]:%d",i+1, j+1, A[i][j]);}
                printf("\n");
    }
}

maior1=A[0][0];
maior2=A[0][0];

for(i=0;i<n; i++) {
    for(j=0;j<n;j++){
            if(A[i][j]>maior1)
            maior1 = A[i][j];

                else
                if (A[i][j]>maior2)
                maior2 = A[i][j];


    }
            }


//multiplicação
mult= A[0][0];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    mult*= A[i][j];

    }
}
printf("\n O maior deles é:%d", maior1);
printf("\n O segundo maior deles é:%d", maior2);
printf ("\n a multiplicação de todos os elementos da matriz é :%d\n\n", mult);




// liberando o ponteiro
for(i=0;i<n;i++){
free(A[i]);
free(A);}

getchar();


return 0;
}
