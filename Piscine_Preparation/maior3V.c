#include <stdio.h>

float max, num1, num2, num3;

void main(){
    
    printf("Introduz\n");

    scanf("%f%f%f", &num1, &num2, &num3);

    if (num1 > num2)
    {
        max = num1;
    }
    else if (num2 > num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    printf("%f é maior",max);

}