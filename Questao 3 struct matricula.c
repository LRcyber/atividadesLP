/*Escreva um programa que receba os dados dos alunos de uma turma. Considere os dados:
Nome, Matricula, Sexo, Idade, email.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct {

char nome [200];
int matricula;
char sexo [2] ;
int idade;
char email [30];

} TCadastro;

int main (void){

    TCadastro Aluno[MAX];
    FILE*fptr;
    int i;

    if ((fptr=fopen("cadastro.txt", "w"))==NULL){
        printf("Erro ao abrir o arquivo!!!\n");
        system("PAUSE");
        exit -1;
        }
    else
    for (i=0;i<2; i++){
    printf ("Digite o nome: ");
    gets (Aluno->nome);
    fflush(stdin);
    fprintf (fptr,"%s",Aluno->nome);
    printf ("Digite a matricula: ");
    scanf ("%d",&Aluno->matricula);
    fflush(stdin);
    fprintf (fptr,"\t%d",Aluno->matricula);
    printf ("Digite o sexo F ou M : ");
    scanf ("%c", Aluno->sexo);
    fflush(stdin);
    fprintf (fptr,"\t%c",Aluno->sexo);
    printf ("Digite a idade: ");
    scanf ("%d",&Aluno->idade);
    fflush(stdin);
    fprintf (fptr,"\t%d",Aluno->idade);
    printf ("Digite o email: ");
    scanf ("%s", Aluno->email);
    fflush(stdin);
    fprintf (fptr,"\t%s",Aluno->email);
    printf ("\n");
    fprintf(fptr,"\n");
    }
fclose(fptr);
return 0;
}
