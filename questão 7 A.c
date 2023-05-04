#include<stdio.h>
#include<stdlib.h>

    int main(void){

    float Kms[10]={240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    float Lts[10]={10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    float Kpl[10]={};
    int i=0,j=0,m=0;

        for (i=0; i<10; i++){
            printf("\nKms[%d] = %.2f ",i,Kms[i]);

        }
        printf("\n");
            for (i=0; i<10; i++){
            printf("\nLts[%d] = %.2f ",i,Lts[i]);
            }
            printf("\n");
                for(i=0; i<10; i++){
                Kpl[i] = Kms[i]/Lts[i];
                printf("\nKpl[%d] = %.2f ",i,Kpl[i]);
             }
            printf("\n");

return 0;
}

