#include <stdio.h>

//Decl Variables
int N;
long int F;

//Decl Functions
long int factorial(int _n);

void main(){
    printf("Introduz um número\n");
    scanf("%d", &N);

    F = factorial(N);
    printf("%d",F);
}

long int factorial(int _n)
{
    F = 1;
    for (int i = 1; i <= _n; i++)
    {
        F = F * i;
    }
    return F;
}
