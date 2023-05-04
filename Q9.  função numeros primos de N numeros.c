#include<stdio.h>
#include<stdlib.h>

void NumN_primo(int);

int main(void){

void NumN_primo(int n);
int n;

printf("\nentre com o valor de N:");
scanf("%d",&n);
NumN_primo(n);

return 0;}

void NumN_primo(int a){
int i, j, primo;

for (i = 1; i < 4*a; i++){
    if (i == 0 || i == 1)
        primo = 0;
        else {
        primo = 1;
            for(j = 2; j < i; j++) {
            if (i % j == 0) {
        primo = 0;
				}
			}
            if (primo == 1) {
			printf("%d ", i);
}
    }
        }
            }


