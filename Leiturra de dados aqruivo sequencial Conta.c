# include<stdio.h>
#include<stdlib.h>


typedef struct{

int numeroConta;
char nome [40];
float saldo;
}Tconta;

void lista_contas(FILE *, int op);

int main(void){

    Tconta *Dados_banco;
    FILE *PtrDados_banco;
    int op = 0;
    if((PtrDados_banco = fopen("contasBanco.txt","r"))==NULL){
    printf("Erro ao abrir arquivo!!!\n");
    system("PAUSE");
    return 1;
}
        else {
       printf ("%-10s% - 13s%s\n","CONTA","NOME","SALDO");
       fscanf(PtrDados_banco, "%d%s%f", Dados_banco->numeroConta, Dados_banco->nome,
              Dados_banco->saldo);

        while (!feof(PtrDados_banco)){
            printf ("%-10d%-13s%7.2f\n", Dados_banco->numeroConta,Dados_banco->nome,
                    Dados_banco->saldo);
            fscanf (PtrDados_banco,"%d%s%f",Dados_banco->numeroConta,Dados_banco->nome,
                    Dados_banco->saldo);
        }
while((op=getchar())!='4'){
switch(op){
case '1': case '2': case '3':
lista_contas(PtrDados_banco, op);
case '\n': case ' ':
break;
default:
printf("Opcao incorreta.\n");
system("PAUSE");
break;
}




fclose(PtrDados_banco);
rewind(PtrDados_banco);
return 0;}
}
void lista_contas(FILE *PtrDados_banco, int op){
Tconta Dados_banco;
char aux[255];
system("CLS");
rewind(PtrDados_banco);
fgets(aux, 255, PtrDados_banco);
while(!feof(PtrDados_banco)){
le_conta(PtrDados_banco, &Dados_banco);

if (op=='1' && !Dados_banco.saldo)
prn_conta(&Dados_banco);
else if (op=='2' && Dados_banco.saldo>0)
prn_conta(&Dados_banco);
else if (op=='3' && Dados_banco.saldo<0)
prn_conta(&Dados_banco);
}
system("PAUSE");
}
}
