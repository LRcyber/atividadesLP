#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
  int n, **M, i, j;
  FILE *fp;
  char  titulo[100];

  printf ("Entre com a dimensão da matriz nxn: ");

  scanf("%d", &n);
  M = (int **) malloc(n*sizeof(int*));
  if (M == NULL) exit (-1);
  for(i = 0; i<n; i++)
    M[i] = (int *) malloc(n*sizeof(int));

  srand(time(NULL));
  for(i = 0; i<n; i++)
    for(j = 0; j<n; j++)
      M[i][j] = rand()%100;

  fp = fopen("mat.txt", "w");
  if(fp == NULL) {
        printf("ERRO\n");
        getchar();
        exit(-1);
  }
//criando a matriz
  fprintf(fp, "Dimensao da matriz a - %d\n", n);
  for(i = 0; i<n; i++){
    for(j = 0; j<n; j++)
      fprintf(fp,"%5d  ",  M[i][j]);
    fprintf(fp, "\n");
  }

  fclose(fp);



//lendo a matriz
  fp = fopen("mat.txt", "r");
  if(fp == NULL) {
        printf("ERRO\n");
        getchar();
        exit(-1);
  }
  fgets(titulo,100, fp);
  puts(titulo);
  for(i = 0; i<n; i++){
    for(j = 0; j<n; j++){
      fscanf(fp,"%5d  ",  &M[i][j]);
      printf("%5d  ", M[i][j]);
    }
    printf("\n");
  }



  fclose(fp);
}
