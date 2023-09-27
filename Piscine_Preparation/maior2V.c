#include <stdio.h>

float max, num1, num2;

void main(){
    
    printf("Introduz\n");

    scanf("%f%f", &num1, &num2);

    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    printf("%f é maior",max);

}