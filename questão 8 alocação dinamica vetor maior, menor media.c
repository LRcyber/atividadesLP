#include<stdio.h>
#include<stdlib.h>

 int main(void){

    int* v,i,n,temp=0, maior, menor,cont;
    float media;

printf( "\n________________________");
printf("\nDigite o valor de n: \n ");

scanf("%d",&n);
printf("\nDigite os numeros:\n");

v = (int*)malloc(n*sizeof(int));
//entrada de dados
for (i=0; i<n; i++){
    scanf("%d", &v[i]);
     temp+=v[i];

}
maior=v[0];
menor=v[0];
//imprime vetor
for (i=0; i<n; i++){
printf("V[%d]:%d\n", i+1,v[i]);
}


printf(" a media e: %.3f",((float)temp/n));


for (i=0; i<n; i++){
 if (v[i]> maior){
    maior = v[i];

 }}
    printf("\n O maior deles e: %d\n", maior);
for (i=0; i<n; i++){
        if (v[i]< menor){
        menor = v[i];
        }}
        printf("\n O menor deles e: %d\n", menor);

return 0;}
