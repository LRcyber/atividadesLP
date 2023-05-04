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
        while (!feof(fptr)){
fscanf(fptr,"%d",&Registro->numero);
fscanf(fptr,"%s",Registro->data);
fscanf(fptr,"%d",&Registro->pecas);

      fclose(fptr);
        for (i=0;i<5; i++){
         if (Registro->numero==1){
    fprintf(fptr1,"%d\t",Registro->numero);
    fprintf(fptr1,"%s",Registro->data);
    fprintf(fptr1,"%d",Registro->pecas);
    fprintf(fptr1,"\n");

    }
        }
            }
fclose(fptr1);
  return 0;
  }
