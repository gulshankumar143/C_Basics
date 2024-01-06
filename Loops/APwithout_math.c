/*
Print all the even numbers upto n terms starting from 2 without using AP.
*/
#include<stdio.h>
int main()
{
    int n,i,a=2;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d ",a);
    a=a+2;
    }
    return 0;
}

    /*
    Output :
    Enter a number : 7
    2 4 6 8 10 12 14
    */