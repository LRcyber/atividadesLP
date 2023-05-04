#include<stdio.h>
#include<stdlib.h>

    int main(void){



         /*
        float x, *xptr = NULL;
        printf("digite 1 valor:\n");
        scanf("%f", &x);
        xptr =&x;
        printf("\n%.2f", x);
        printf("\n%.2f", *xptr);
        printf("\n%d", &x);

        float x = 123.97888,y = 879.09889,z= 67.5889, *ptrx=NULL,*ptry=NULL,*ptrz=NULL;
        ptrx =&x;
        ptry=&y;
        ptrz=&z;
        printf("\n%.3f", *ptrx);
        printf("\n%.3f", *ptry);
        printf("\n%.3f", *ptrz);


*/
        float x = 3.98,y = 97.09,z= 689.2, *ptr=NULL;
        ptr=&x;
        printf("\n%.2f ", *ptr);
        ptr=&y;
        printf("\n%.2f ", *ptr);
        ptr=&z;
        printf("\n%.2f\n", *ptr);


    getchar();
    return 0;


    }
