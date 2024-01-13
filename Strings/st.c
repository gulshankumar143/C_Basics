#include<stdio.h>
int main()
{
    char str[20]="Hello There!";
    int i;
    str[1]=97;
    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}

/*
Output :
Hallo There!
*/