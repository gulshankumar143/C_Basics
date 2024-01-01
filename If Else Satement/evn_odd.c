/*
Take positive integer input and tell if it is even or odd
*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%2==0)
    printf("%d is an Even Number.",x);
    else
    printf("%d is an Odd Number.",x);
    return 0;
}
/*
Output 1:
Enter a number : 45
45 is an Odd Number.

Output 2:
Enter a number : 674
674 is an Even Number.
*/