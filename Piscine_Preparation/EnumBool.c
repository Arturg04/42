#include <stdio.h>

enum boolean {FALSE, TRUE};
enum boolean par(int num);


void main(){
    printf("%d", par(6));
}

enum boolean par(int num){
    if(num%2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}