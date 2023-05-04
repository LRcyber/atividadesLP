#include<stdio.h>
#include<stdlib.h>
#define MAX 10


void grava_arquivo (FILE*, int*);
void le_arquivo (FILE*, int*);
int menor (FILE*, int*);
int maior (FILE*, int*);
int media (FILE*, int*);

int main(void){

    int V[MAX];
    int*vetor= NULL;
    FILE*vet;
    int n,i;
// verifica se o vetor de arquivos n eh NULO
   if((vet = fopen("vetor.txt","rw"))==NULL){
    printf("Erro ao abrir arquivo!!!\n");
    system("PAUSE");
    return -1;}

   //aloca dinamicamente o vetor
  vetor = (int*)malloc(MAX*sizeof(int));
//verifica se o vetor aponta para NULL
if (vetor==NULL){
printf("Erro: Memoria insuficiente!!!\n");
system("PAUSE");
return -1;
}

//preenche vetor
printf ("entre com os elementos do vetor:\n");
for (i=0; i<MAX;i++){
    scanf("%d",&*(vetor+i));
}
grava_arquivo(vet,vetor);
le_arquivo (vet, vetor);
menor (vet, vetor);

return 0;}
//função grava vetor no arquivo
void grava_arquivo (FILE*vet, int*vetor){
int i;
for(i=0;i<MAX;i++){
fprintf(vet, "%7d", *(vetor+i));
fprintf(vet, "\n");
    }
}
void le_arquivo (FILE*vet, int*vetor){
int i,menor=0;

for(i=0;i<MAX;i++){
fscanf(vet, "%d", &*(vetor+i));
fscanf(vet, "\n");
    }
}
int menor (FILE*vet, int *vetor){
    int i;
    while(!feof(vet)){
    for(i=0;i<MAX;i++){
           vetor++;
        if (*(vetor+i)< menor){
        (*(vetor+i))= menor;
        return menor;}

        }
    }
}

int maior (FILE*vet, int *vetor){
}
int media (FILE*vet, int *vetor){
}
