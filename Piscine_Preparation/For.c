#include <stdio.h>

float num;

void main()
{
    for (int i = 0; i < 10; i++)
    {
        num = 10 - i;
        printf("%f\n", num);
    }
}