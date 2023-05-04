#include <stdio.h>


        int main(void)
        {

        char nome [10];
        char telefone [12];

            printf ("NOME: ");
            fgets (nome, 10, stdin);
            printf ("TELEFONE: ");
            fgets (telefone, 12, stdin);

            printf ( "%s  %s", nome, telefone);




        return 0;



        }
