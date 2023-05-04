#include<stdio.h>
#include<stdlib.h>

    int main(void){

    float Kms[10]={240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    float Lts[10]={10.3, 15.6, 8.7, 14.00, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    float Kpl[10]= {0.0};
    float *ptrKms= NULL;
    float *ptrLts=NULL;
    float *ptrkpl;
    int i;

    ptrKms = Kms;
    ptrLts = Lts;
    ptrkpl = Kpl;

for (i=0; i< 10 ; i++){
printf("\nKms[%d] = %.2f ",i+1,*ptrKms);
ptrKms++;
}
printf("\n");
for (i=0; i<10; i++){
printf("\nLts[%d] = %.2f ",i+1,*ptrLts);
ptrLts++;
}
printf("\n");


for(i=0; i<10; i++){
((*(ptrkpl+i)) = ((float)*(ptrKms+i)/ (float)*(ptrLts+i)));
*ptrkpl++;
*ptrKms++;
*ptrLts++;


}

for(i=0; i<10; i++){
printf("\nKpl[%d] = %.2f ",i+1,*ptrkpl);
 ptrkpl++;
            }
printf("\n");

free (ptrKms);
free (ptrLts);
free (ptrkpl);

return 1;
}
