#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int *val;
    int n;
    int max;
    int min;
    float media;
}TSeq;

int main(void){

    TSeq sequencia;
    int i, max;
    float temp;

printf("Digite o numero de elementos da sequencia: ");
scanf("%d", &sequencia.n);

if (sequencia.n<=0){
    printf("ERRO!");
    return -1;
}
sequencia.val=(int*)malloc(sequencia.n*sizeof(int));
if (sequencia.val==NULL){
    printf("ERRO MEMORIA INSUFICIENTE!!");
    return -1;

}


//entrada de dados
printf("Digite os elementos da sequencia:\n");
for (i=0; i<sequencia.n; i++){
    scanf("%d", &sequencia.val[i]);
    fflush(stdin);
    temp+=sequencia.val[i];
}

for (i=0; i<sequencia.n; i++){
    printf("\n%d", *(sequencia.val+i));
    if (sequencia.val[i] > sequencia.max){
        sequencia.max = sequencia.val[i];
    }

    if (sequencia.val[i] < sequencia.min){
        sequencia.min = sequencia.val[i];
    }
}
    sequencia.media=temp/sequencia.n;
    printf ("\n elemento de valor maximo da sequencia: %d", sequencia.max);
    printf ("\n elemento de valor minimo da sequencia:%d", sequencia.min);
    printf ("\n A media dos elementos da sequencia:%.2f\n", sequencia.media);



return 0;}
