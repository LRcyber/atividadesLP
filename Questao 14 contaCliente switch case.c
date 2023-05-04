/*Escreva um programa para gerenciamento das contas dos clientes de uma empresa. Para
cada cliente considere os dados: Numero de conta, Titular e Saldo. Para o nmero da conta
considere a posio da conta no arquivo. Seu programa dever mostrar o menu:
1) Inserir conta,
2) Atualizar saldo,
3) Listar clientes devedores,
4) Listar clientes credores,
5) Encerrar programa.*/


#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
typedef struct{
    char numeroconta [20];
    char nome [200];
    float saldo;
}TConta;

 int main (void){
     TConta Clientes [MAX];
     int op;
     FILE*fptr;

     if ((fptr=fopen("clientes.dat","w"))== NULL){
            printf("Erro!!");
            system ("PAUSE");
            exit (-1); }

else
    printf(" Digite a solicitacao\n1-Inserir conta\n2-Atualizar saldo\n3-Listar clientes devedores\n4-Listar clientes devedores\n5-Encerrar programa\n");
    scanf("%d", &op);

while (op!=5){
    fscanf(fptr,"%s%s%f",Clientes->numeroconta,Clientes->nome, Clientes->saldo);

switch (op){
case 1:
    printf("INSERIR CONTA\n");
    printf("Digite numero: ");
    scanf("%s",Clientes->numeroconta);
    fprintf(fptr,"%s\t", Clientes->numeroconta);
    printf("Digite o nome: ");
    scanf("%s",Clientes->nome);
    fprintf(fptr,"%s\t", Clientes->nome);
    printf("Digite o saldo inicial: ");
    scanf("%f",&Clientes->saldo);
    fprintf(fptr,"%f", &Clientes->saldo);

    break;

case 2:
    printf ("ATUALIZAR SALDO\n");
    scanf("%s",Clientes->numeroconta);
    fprintf(fptr,"%s\t", Clientes->numeroconta);
    printf("Digite o nome: ");
    scanf("%s",Clientes->nome);
    fprintf(fptr,"%s\t", Clientes->nome);
    printf("Digite o saldo novo: ");
    scanf("%f",&Clientes->saldo);
    fprintf(fptr,"%f", &Clientes->saldo);


break;
case 3:
    printf ("CONTAS COM O SALDO DEVEDOR:\n");

    while (!feof(fptr)){
        if (Clientes->saldo<0){
            printf("%s\t%s\t%f",Clientes->numeroconta,Clientes->nome, Clientes->saldo);
        }
        fscanf(fptr, "%s\t%s\t%f",Clientes->numeroconta,Clientes->nome, &Clientes->saldo);
    }
break;
case 4:
    printf ("CONTAS COM O SALDO CREDOR:\n");

    while (!feof(fptr)){
        if (Clientes->saldo>0){
            printf("%s\t%s\t%f",Clientes->numeroconta,Clientes->nome, Clientes->saldo);
        }
        fscanf(fptr, "%s\t%s\t%f",Clientes->numeroconta,Clientes->nome, &Clientes->saldo);
    }
break;

}
rewind(fptr);
printf ("\n");
scanf("%d", &op);
    }





 return 0;}
