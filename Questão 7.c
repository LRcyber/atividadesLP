#include <stdio.h>


        int main (void){

            int mochila, isqueiro, chinelo;
            float total, valor;
            int i=0;

            printf ("\n\n---------------------VENDAS---------------------\n");
            printf ("\n Entre com a quantidade de MOCHILAS vendidas: ");
            scanf  ( "%d", &mochila );
            printf ("\n Entre com a quantidade de ISQUEIROS vendidos: ");
            scanf  ( "%d", &isqueiro );
            printf ("\n Entre com a quantidade de CHINELOS vendidos: ");
            scanf  ( "%d", &chinelo );

            total = (float)((mochila*25.00)+(isqueiro*2.00)+(chinelo*7.00));



                    printf ( "\n valor total de vendas: R$%.2f ", total);
                    printf ( "\n valor de vendas de mochilas: R$%.2f ", mochila *25.00);
                    printf ( "\n valor de vendas de isqueiro: R$%.2f ", isqueiro*2.00);
                    printf ( "\n valor de vendas de chinelos: R$%.2f ", chinelo*7.00);

return 0;}





