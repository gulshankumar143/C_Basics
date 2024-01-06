#include<stdio.h>
int factorial(int x)
{
    int fact = 1;
    for(int i = 2;i<=x;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{   
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int ncr = factorial(n)/(factorial(r) * factorial(n-r));
    printf("The combination of %dC%d is %d .",n,r,ncr);
    return 0;
}

/*

Otput :
Enter n : 5
Enter r : 3
The combination of 5C3 is 10 .
*/