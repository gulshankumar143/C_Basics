#include<stdio.h>
int main()
{
    int i;
    char arr[]="Hello there!"; //Use double quote.
    char ar[]={'H','e','l','l','o','\0'};
    i=0;
    while(arr[i]!=0)
    {
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
    {
        i=0;
       while(ar[i]!=0)
    {
        printf("%c",ar[i]);
        i++;
    }
    }
    return 0;
}

/*
Output :
Hello there!
*/