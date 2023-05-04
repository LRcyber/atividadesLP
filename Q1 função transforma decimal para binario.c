#include<stdio.h>
#include<stdlib.h>


int binario (const int);

int main (void){

int n;
printf("entre com o numero em decimal:");
scanf("%d", &n);
printf("%d", binario(n));

        return 0;
        }
int binario (const int val){
if (val == 0)
return 0;
return binario(val/2)*10+val%2;

}
