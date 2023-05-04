#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
char nome[10];
char  telefone [13];
struct item *proximo;
}Titem;

int main(void){
Titem agenda;
Titem *raiz = NULL, *ultimo;
char nome[10];
int tam, resultado;

printf("Entrada de Dados\n");
printf("Digite o nome: (0 para finalizar):");
gets(nome);

while(nome[0]!='0'){
if (raiz == NULL){
raiz = malloc(sizeof(Titem));
ultimo = raiz;
}
else{
ultimo->proximo = malloc(sizeof(Titem));
ultimo = ultimo->proximo;
}
if (ultimo == NULL){
printf("Erro: Memoria insufuciente.\n");
return -1;
}
ultimo->proximo = NULL;
strcpy(ultimo->nome, nome);
printf("Digite o telefone: ");
scanf("%s", &(ultimo->telefone));
fflush(stdin);
printf("Digite o nome: (0 para finalizar)");
gets(nome);
}
if (raiz != NULL){
printf("\nSaida de dados\n");
while(raiz != NULL){
ultimo = raiz;
printf("NOME: %10s TELEFONE: %15s\n",
ultimo->nome,
ultimo->telefone);
raiz = ultimo->proximo;
free(ultimo);
}
}


if (raiz != NULL){
printf("\nSaida de dados\n");
while(raiz != NULL){
ultimo = raiz;
printf("NOME: %10s TELEFONE: %15s\n",
ultimo->nome,
ultimo->telefone);
raiz = ultimo->proximo;
free(ultimo);
}
}

tam = strcmp (ultimo->nome,nome);
 if (resultado>0){
                strcpy(nome,ultimo->nome);
        }
        if (resultado<0){
                strcpy(ultimo->nome, nome);
        }




        if (raiz != NULL){
printf("\nSaida de dados\n");
while(raiz != NULL){
ultimo = raiz;
printf("NOME: %10s TELEFONE: %15s\n",
ultimo->nome,
ultimo->telefone);
raiz = ultimo->proximo;
free(ultimo);
}
}


system("PAUSE");
return 0;
}
