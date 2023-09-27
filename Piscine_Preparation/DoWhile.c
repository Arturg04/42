#include <stdio.h>

int num;

void main()
{
   printf("Introduz um numero\n");
   scanf("%d", &num);
   do
   {
        printf("Introduz um numero\n");
        scanf("%d", &num);
        if (num != 0){
            printf("%d\n", num);
        }
   } while (num != 0);
   
}