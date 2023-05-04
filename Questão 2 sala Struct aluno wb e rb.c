#include<stdio.h>
#include<stdlib.h>
#define MAX 5


typedef struct {
 char nome [40];
 char matricula [10];
 float CR;
 }Testudante;

 void inserir_aluno(FILE*,Testudante*);

 int main(void){
 int N, i;
     Testudante aluno[MAX], *TPtr;
     FILE*fptr1;

 if((fptr1 = fopen("alunos.txt","r"))==NULL){
    printf("Erro ao abrir arquivo!!!\n");
    system("PAUSE");
    return -1;}

    i=0;
    while(feof(fptr1) != 0){
      fscanf(fptr1,"%s",aluno[i].nome);
      fscanf(fptr1,"%s",aluno[i].matricula);
      fscanf(fptr1,"%f",aluno[i].CR);
      i++;
    }
    fclose(fptr1);
    if((fptr1 = fopen("notas.dat","wb"))==NULL){
    printf("Erro ao abrir arquivo!!!\n");
    system("PAUSE");
    return -1;}

    fwrite(aluno,sizeof(Testudante),5,fptr1);
    fclose(fptr1);

if((fptr1 = fopen("notas.dat","rb"))==NULL){
    printf("Erro ao abrir arquivo!!!\n");
    system("PAUSE");
    return -1;}
    fread(aluno,sizeof(Testudante),5,fptr1);


 return 0;}








 void inserir_aluno(FILE*fptr1,Testudante*TPtr){

 }
