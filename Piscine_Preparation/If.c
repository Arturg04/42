#include <stdio.h>


void main(){

    int num;

    printf("Introduza um número\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("numero par");
    }
    else{
        printf("numero impar");
    }
}