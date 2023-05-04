#include<stdio.h>
#include<locale.h>
#define MAX 3



        int main(void)
{
        int i;
        float temp;
        float P1[MAX];
        float P2[MAX];
        float MEDIA[i] ;
        float *ptrP1;
        float *ptrP2;
        float *ptrP3;


        ptrP1= &P1[i];
        ptrP2 = &P2[i];
        ptrP3 =MEDIA;


        setlocale(LC_ALL, "Portuguese"); /* biblioteca locale */


            printf("NOTA DA PROVA I:\n");
            for(i=0;i<MAX;i++){
            printf("aluno %d: ",i+1);
            scanf("%f",&P1[i]);
            }
            printf ("\n");
            printf("NOTA DA PROVA II:\n");
            for(i=0;i<MAX;i++){
            printf("aluno %d: ",i+1);
            scanf("%f",&P2[i]);
            }
            printf("\n");


            printf("\nA MÉDIA FINAL:\n");
            for(i=0;i<MAX;i++){

            *ptrP3 = ((*ptrP1 + *ptrP2)/2);
            ptrP1++;
            ptrP2++;
            ptrP3++;
                        }
            for(i=0;i<MAX;i++){
            printf("\naluno %d: ",i+1);
            printf ("\%.2f", MEDIA[i]);
            if (MEDIA[i]>=7)
                printf("\tAPROVADO");
                    else printf("\tREPROVADO");
                }

        free (ptrP1);
                free (ptrP2);
                        free (ptrP3);


return 0;

}
