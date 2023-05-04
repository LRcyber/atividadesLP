#include <stdio.h>

int binario_conversor(int);
int main(void)
{
    int num, bin;

    printf("Entre com o numero decimal : ");
    scanf("%d",&num);
    bin = binario_conversor(num);
    printf("O numero binario equivalente de %d e : %d\n", num, bin);
}

int binario_conversor(int num)
{
    if(num ==0)
    {
        return 0;
    }
    else
    {
        return(num %2)+10* binario_conversor(num /2);
    }
}
