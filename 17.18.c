/* Luciana Roncarati 20210910
Questao 17 e 18 Programa que receba um vetor de n numeros inteiros .
O programa deve informar os valores que n se repetem e a quantidade de vezes que cada um
se repete e se não repete*/


#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(void){

int n, i, j;
int *v;
int numero=1, maior=0, count=0;

setlocale(LC_ALL, "Portuguese"); /* biblioteca locale */

printf("digite a quantidade de elementos do vetor: ");
scanf("%d",&n);
//alocaçao dinamica do vetor
v=malloc(n*sizeof(int));

if (v==NULL){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}
//entrada de dados
for(i=0; i<n; i++){
printf("digite o valor de v[%d]: ",i);
scanf("%d",&v[i]);
//referenciando o valor
    if(*(v+i)>maior){
    maior=*(v+i);
}
}
for(i=0; i<maior; i++){
    for(j=0; j<n; j++){
    if(*(v+j)==numero){
    count++;
}
    }
if(count>0){
        if(count>1){
        printf("\nO %d se repete %d vezes",numero, count);
}
    }
            if(count==1){
            printf("\nO %d não se repete",numero);}

        numero++;
        count=0;
}

printf("\n");
free(v);

getchar();
return 0;
}
