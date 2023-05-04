/* Luciana Roncarati mat 202010910
Questao 9
Programa que encontra o maior o menor e a média de um vetor de ponteiros de n
elementos */




#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void) {

int i,maior,menor,med,n,temp=0, aux;
int *v=NULL;

setlocale(LC_ALL, "Portuguese"); /* biblioteca locale */

printf("\n Quantidade elementos no vetor: \n");
scanf("%d",&n);

printf("\n Quais elementos do vetor: \n");
v = (int*)malloc(n*sizeof(int));


if (v==NULL){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}

//preenche vetor
for(i=0;i<n;i++){
scanf("%d",&v[i]);
 temp+= *(v+i);}

printf("\n");
// imprime vetor
printf("VETOR:");
for(i=0;i<n;i++){
printf("\n v[%d]:%d",i+1,v[i]);
                }
printf ("\n");

// encontra o maior valor
maior =*v;
menor = *v;
for(i=0;i<n;i++){
    if(*(v+i)>(maior))
    maior = *(v+i);
    if(*(v+i)<(menor))
    menor = *(v+i);
    }




printf("O maior elemento é : %d\n",maior);
printf("O menor elemento é :%d\n", menor);
printf(" A media é: %.3f",((float)temp/n));


free(v);

return 0;
    }
