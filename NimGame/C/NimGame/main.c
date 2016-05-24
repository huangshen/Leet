#include <stdio.h>

#define bool int
#define false  0
#define true   1

bool canWinNim(int n) {
    if((n%4) == 0)
        return false;
    else
        return true;
}

void main()
{
    bool ret;

    printf("Nim Game. \n");

    ret = canWinNim(100);

    if(ret == true)
        printf("win!\n");
    else
        printf("fail!\n");


    return;
}