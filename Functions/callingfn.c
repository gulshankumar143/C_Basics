#include<stdio.h>
void england()
{
    printf("You are in England.\n");
    return;
}
void australia()
{
    printf("You are in Australia.\n");
    england(); //calling england
    return;
}
void india()
{
    printf("You are in India.\n");
    australia(); //calling australia
    return;
}
int main()
{
    india(); //caling india
    return 0;
}

/*
Output :
You are in India.
You are in Australia.
You are in England.
*/