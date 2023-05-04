#include <stdio.h>
#include<string.h>

int strlen_rec(char *);
int main(){
char str[] = "Recursividade";
printf("Comprimento: %d\n", strlen_rec(str));
system("PAUSE");
return 0;
}

int strlen_rec(char * ch){
if (!(*ch)) //condição de parada
return 0;
else
return 1 + strlen_rec(++ch);
}
