#include <stdio.h>
#include <stdlib.h>

    int main (void)
    {
        char nome [20];
        char sexo;
        int resultado;
        int i = 0, aprov = 0 , reprov =0 ;
        int N=5;
        int contador;


         printf ("\nDigite NOME ou TECLE -1 PARA SAIR");
          while ( contador!= -1){
            i++;
        printf ("\nNOME: ");
        fgets (nome,20, stdin);
        printf ("SEXO: F ou M ");
        scanf ( "%c", &sexo);
        printf ("RESULTADO < 1- aprovado e 2- reporvado>");
        scanf ( "%d", &resultado);}


    return 0;}


