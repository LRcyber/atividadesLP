/* Multiplica matriz por vetor (Ab = c)
utilizando alocação dinâmica de memória */
#include <stdio.h>
#include <stdlib.h>

int main(void){
int lm, cm, lv, //dimensoes da matriz e o vetor
i, j, k; //controladores de laços
float **A, //Elementos da matriz
*b, //Elementos do vetor de entrada
*c; //Elementos do vetor resposta
//Leitura das dimensoes da matriz e o vetor
printf("Digite o numero de linhas da matriz: ");
scanf("%d", &lm);
printf("Digite o numero de colunas da matriz: ");
scanf("%d", &cm);
printf("Digite o numero de elementos do vetor: ");
scanf("%d", &lv);

//Verificacao - multiplicacao definida
if(cm!=lv){
printf("Multiplicacao indefinida!!!\n");
system("PAUSE");
return -1;
}
//Alocacao de memoria
b = malloc (lv * sizeof(float));
c = malloc (lv * sizeof(float));
A = malloc (lm * sizeof(float *));
//Verificando alocacao bem sucedida
if ((A==NULL)||(b==NULL)||(c==NULL)){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}
for(i=0;i<lm;i++){
A[i] = malloc (lv * sizeof(float));
if (A[i]==NULL){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}
}
//Entrada de dados
for(i=0;i<lm;i++)
for(j=0;j<cm;j++){
printf("Digite o elemento [%d][%d] de A: ", i+1, j+1);
scanf("%f", &A[i][j]);
}
printf ("\n");
for(i=0;i<lv;i++){
printf("Digite o elemento [%d] de b: ", i+1);
scanf("%f", &b[i]);
}
//Multiplicacao de matriz por vetor
for(i=0;i<lm;i++){
c[i] = A[i][0] * b[0];
for(j=1;j<cm;j++)
c[i] += A[i][j] * b[j];
}
//Impressao dos resultados
printf("\nResultados:\n");
for(i=0; i<lm; i++)
printf("c[%d] = %8.3f\n", i, c[i]);
//Liberando a memoria alocada
free(c);
free(b);
for(i=0;i<lm;i++)
free(A[i]);
free(A);
system("PAUSE");
return 0;
}
