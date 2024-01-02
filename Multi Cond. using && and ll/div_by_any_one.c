/*
Take a Positive Integer from the keyboard and check if it divisible by 3 or 5.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)
        printf("%d is divisible by 3 or 5", n);
    else
        printf("%d is not divisible by 3 or 5", n);
    return 0;
}

/*
Output 1:
Enter a number : 20
20 is divisible by 3 or 5

Output 2:
Enter a number : 69
69 is divisible by 3 or 5
*/