/*
Take integer input and print the absolute value of that integer
*/

#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a value : ");
    scanf("%d",&x);
    n=x;
    if(x<0)
    x=x*(-1);
    printf("The Absolute Value of %d is %d.",n,x);
    return 0;
}

/*

Output 1st:
Enter a value : 65
The Absolute Value of 65 is 65.

Output 2nd:
Enter a value : -67
The Absolute Value of -67 is 67.

*/