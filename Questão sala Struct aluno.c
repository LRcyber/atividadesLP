#include<stdio.h>
#include<stdlib.h>
#define MAX  100



typedef struct {
 char nome [40];
 char matricula [10];
 float CR;
 }Taluno;


 int main (void){
     int N, i;
     Taluno aluno[MAX];
     FILE*fptr;

     if((fptr = fopen("alunos.txt","w"))==NULL){
     printf("Erro ao abrir arquivo!!!\n");
     system("PAUSE");
     return -1;}
     printf( "entre com o valor de N:");
     scanf ("%d", &N);

     for (i=0; i<N; i++){
        printf( "entre com o nome do aluno %d: ", i+1);
        scanf("%s",&aluno[i].nome);
        fflush(stdin);
        printf( "entre com o numero de matricula: ");
        scanf("%s",&aluno[i].matricula);
        fflush(stdin);
        printf( "entre com o CR: ");
        scanf ("%f", &aluno[i].CR);
        fflush(stdin);

     }
     for (i=0; i<N; i++){
        fprintf(fptr,"%s\t ",aluno[i].nome );
        fprintf(fptr,"%s\t ",aluno[i].matricula );
        fprintf(fptr,"%.2f ",aluno[i].CR );
        fprintf(fptr,"\n");

     }
     fclose(fptr);




 return 0;
 }
