#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3

typedef struct{
    int matricula;
    char nome [20];
    char sobrenome [30];
    float nota;
    }Taluno;

    int main (void){

Taluno aluno[N];
int i, pior, melhor;
float media, soma;


for (i=0; i<N; i++){
//entrada de dados
printf("MATRICULA:");
scanf("%d",&aluno[i].matricula);
fflush (stdin);
printf("NOME:");
gets(aluno[i].nome);
printf("SOBRENOME:");
gets(aluno[i].sobrenome);
printf("NOTA:");
scanf("%f", &aluno[i].nota);
soma+=aluno[i].nota;
fflush (stdin);
printf("\n");
}

printf ("-------------ALUNOS-------------");
for (i=0; i<N; i++){
printf("\nMatricula:%d\nNome:%s\nSobrenome:%s\nNota:%.2f\n",
    aluno[i].matricula,
    aluno[i].nome,
    aluno[i].sobrenome,
    aluno[i].nota);

}
for (i=0; i<N; i++){
    if (aluno[i].nota>aluno[melhor].nota)
       aluno[melhor].nota= aluno[i].nota;


}
        for (i=0; i<N; i++){
        if (aluno[i].nota<aluno[pior].nota)
        aluno[pior].nota = aluno[i].nota;
}


printf ("O melhor aluno e:%s", aluno[melhor].nome);
printf ("O pior aluno e:%s", aluno[pior].nome);
media =  soma/ N;
printf ("a media e: %.2f",media);




    return 0;
    }

