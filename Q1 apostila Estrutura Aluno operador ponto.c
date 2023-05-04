#include<stdio.h>
#include<stdlib.h>
#include <string.h>



typedef struct {
    char nome [20];
    char sobrenome [100];
    int idade;
    char sexo [2];
    char email[30];
    }Taluno;

int main (void){

Taluno aluno;
printf ("\nNOME:\n");
gets(aluno.nome);
printf ("SOBRENOME:\n");
gets (aluno.sobrenome);
printf("IDADE:\n");
scanf("%d", &aluno.idade);
fflush (stdin);
printf ("SEXO:\n");
scanf ("%c", &aluno.sexo);
printf("EMAIL:\n");
gets(aluno.email);


printf("\nDados\n nome:%s\n sobrenome:%s\n idade:%d\n Sexo:%c\n e-mail:%s",
    aluno.nome,
    aluno.sobrenome,
    aluno.idade,
    aluno.sexo,
    aluno.email);





getchar();
    return 0;
}

