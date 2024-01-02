/*
ternary operator
exp1 ? exp2 : exp3
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    n%2==0 ? printf("Even Number.") : printf("Odd Number.");
    return 0;
}

/*
Output 1:
Enter a positive integer : 12
Even Number.

Output 2:
Enter a positive integer : 73
Odd Number.
*/