/*A seo de controle de produo de uma fbrica mantm o arquivo de registros de produo por
mquinas. Cada registro contm o nmero da mquina, a data e o nmero de peas produzidas no
dia. Supondo que a fbrica possua trs mquinas, escrever um algoritmo que separe o arquivo
em trs outros arquivos, um para cada mquina.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 200

 typedef struct {
  int numero;
  char data [10];
  int pecas;
  } TVendas;

  int main (void){

      TVendas Registro [MAX];
      FILE*fptr;
      FILE*fptr1;
      FILE*fprt2;
      FILE*fptr3;
      int i;

      if ((fptr=fopen("maquinas.txt", "r"))==NULL){
        printf("Erro ao abrir o arquivo!!!\n");
        system ("PAUSE");
        exit (-1);
      }

for (i=0; i<5; i++) {
printf("Digite o numero da maquina ou 0 para sair:");
scanf("%d",&Registro->numero);
fprintf(fptr, "MAQUINA:%d\t",Registro->numero);
printf("Digite a data dd/mm/aa: ");
scanf("%s",Registro->data);
fflush(stdin);
fprintf(fptr,"DATA:%s\t",Registro->data);
printf("Digite o numero de pecas vendidas:");
scanf("%d",&Registro->pecas);
fflush(stdin);
fprintf(fptr,"PECAS:%d",Registro->pecas);
printf("\n");
fprintf(fptr,"\n");
}

fclose(fptr);
  return 0;
  }
