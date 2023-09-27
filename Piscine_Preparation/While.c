#include <stdio.h>

int num;

void main()
{
   printf("Introduz um numero\n");
   scanf("%d", &num);
   while (num != 0)
   {

        printf("Introduz um numero\n");
        scanf("%d", &num);
   }
}