#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3


typedef struct {
    char nome [20];
    char sobrenome [30];
    int idade;
    char sexo;
    char email[20];
    }Taluno;

    int main (void){

Taluno *ptr, aluno[N];
int i;

ptr = malloc(N*sizeof(Taluno));
if (ptr == NULL) {
printf ("memoria insuficiente:");
return (-1);} //Erro

//entrada de dados

printf("\nNOME:");
gets(ptr->nome);
printf("SOBRENOME:");
gets(ptr->sobrenome);
printf("IDADE:");
scanf("%d",&(ptr->idade));
fflush (stdin);
printf("SEXO M ou F:");
scanf("%c", &(ptr->sexo));
fflush (stdin);
printf("EMAIL:");
gets (ptr->email);

printf("\nNome:%s\nSobrenome:%s\nIdade:%d\nSexo:%c\ne-mail:%s\n\n",
       ptr->nome,
       ptr->sobrenome,
       ptr->idade,
       ptr->sexo,
       ptr->email);


free(ptr);

    return 0;
}
