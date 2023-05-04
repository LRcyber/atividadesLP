#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

     int main(void){

         int ma,na,mb,nb;
         int linA, colB;
         float temp;
         int i,j;
         float A[10][10], B [10][10], SOMA [10][10], SUBTRA [10][10];


setlocale(LC_ALL, "Portuguese"); /* biblioteca locale */
printf ("\nSOMA DE MATRIZES A+B \n\n");
printf ("QUANTIDADE DE LINHA DE  A = " );
scanf("%d", &ma);
printf ("QUANTIDADE DE COLUNA DE A = " );
scanf("%d", &na);
printf ("QUANTIDADE DE LINHA DE  B = " );
scanf("%d", &mb);
printf ("QUANTIDADE DE COLUNA DE B = " );
scanf("%d", &nb);
printf("\n");


if ((ma != mb)||(na != nb)) {

printf ("\nA SOMA/SUBTRAÇÃO DAS MATRIZES NÃO PODE SER REALIZADA\n");
printf ("\nO NÚMERO DE LINHAS E COLUNAS DA MATRIZ A É DIFERENTE DA MATRIZ B\n");
system("PAUSE");
return -1;;}

printf ( "\n\nCARREGAMENTO DA MATRIZ A\n\n");

for (i=0; i< ma; i++) {
    for ( j=0; j<na; j++){
    printf( "A[%d][%d]= ", i+1,j+1);
    scanf("%f", &A[i][j]);
}
}
printf ("\n\nCARREGAMENTO DA MATRIZ B\n\n");
for (i=0; i< mb; i++) {
    for ( j=0; j<nb; j++){
    printf( "B[%d][%d]= ", i+1,j+1);
    scanf("%f", &B[i][j]);
}
}
printf ("\n\n MATRIZ A\n\n");
for (i=0;i< ma; i++){
    for (j=0; j<na; j++){
    if (j!= (na-1)){
    printf("%.2f\t", A[i][j]);
}
else
{
printf("%.2f\n", A[i][j]);
}
}
}
printf ("\n\n MATRIZ B\n\n");
for (i=0;i< mb; i++){
    for (j=0; j<nb; j++){
    if (j!= (nb-1)){
    printf("%.2f\t", B[i][j]);
}
    else
{
printf("%.2f\n", B[i][j]);
}
}
}

printf ("\n\n SOMA= A + B\n\n");

for (i=0; i<ma;i++){
    SOMA[i][j]= A[i][j]+ B [i][j];
    for (j=0; i<na;i++){
        for (i=0; i<mb;i++){
            for (j=0; i<nb;i++){
         SOMA[i][j]= A[i][j]+ B [i][j];
}
}
}
}

for ( i=0; i< ma; i++){
    for (j=0; j< nb;j++){
    if (j!= (nb-1)){
    printf("%.2f\t", SOMA[i][j]);
}
    else
    printf("%.2f\n", SOMA[i][j]);
}
}


    return 0;}

