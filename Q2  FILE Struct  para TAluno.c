#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3

typedef struct{

 char nome [255];
 char telefone [13];
}Taluno;

void grava_aluno (FILE*, Taluno*);

int main (void){

void grava_aluno (FILE*turma, Taluno*ptrd);
FILE*turma;
Taluno *ptr, aluno[N];
int i;

ptr = malloc(N*sizeof(Taluno));
if (ptr == NULL) {
printf ("memoria insuficiente:");
return (-1);} //Erro

if ((turma=fopen("turma.txt", "a"))==NULL){
    printf("Erro ao abrir arquivo!!!\n");
system("PAUSE");
return -1;
}


grava_aluno (turma,aluno);

return 0;}

void grava_aluno (FILE*turma, Taluno*classe){
    int i;
for (i=0; i<N; i++){
    printf("Digite o nome:");
    gets(classe->nome);
    if((*classe->nome)==' '){
       exit -1;}
    printf("Digite o tefefone:");
    gets(classe->telefone);
    fprintf (turma,"%s",classe->nome);
    fprintf (turma,"%s",classe->telefone);
}
}
