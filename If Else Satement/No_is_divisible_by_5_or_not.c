/*
Take positive integer input and tell if it is divisible by 5 0r not.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%5==0)
    printf("%d is divisible by 5.",x);
    else
    printf("%d is not divisible by 5.",x);
    return 0;
}

/*

Output 1:
Enter a number : 76
76 is not divisible by 5.

Output 2:
Enter a number : 105
105 is divisible by 5.

*/