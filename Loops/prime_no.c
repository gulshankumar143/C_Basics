/*
    Break Statement :
    WAP to print prime number.
*/
#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        a=1;
        break;
    }
    if(n==1)
    printf("%d is neither Prime nor Composite Number.",n);
    else if(a==0)
    printf("%d is a Prime Number.",n);
    else
    printf("%d is a Composite Number.",n);
    return 0;
}
/*
    Output :
    Enter a number : 67
    67 is a Prime Number.
*/