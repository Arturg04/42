#include <stdio.h>

float num1,num2,media;

void main()
{
    printf("Introduza os valores :\n");
    scanf("%f%f",&num1,&num2);
    media = (num1 + num2)/2;
    printf("%f",media);
}