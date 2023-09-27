#include <stdio.h>

char letra;

void main(){
    printf("inserir estado civil:");
    scanf("%c",&letra);
    switch (letra)
    {
        case('C'):
            printf("%c",letra);
            break;
        case('S'):
            printf("%c",letra);
            break;
        case('D'):
            printf("%c",letra);
           break;
        case('V'):
            printf("%c",letra);
            break;
        default:
            printf("Errou Burro");
            break;    
    }
}