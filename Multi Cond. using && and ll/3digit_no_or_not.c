/*
Take a Positive Number from the keyboard and check whether it is a 3 digit number or not.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("%d is a 3 digit number.",n);
    }
    else
    printf("%d is not a 3 digit number.",n);
    return 0;
}

 /*
 Output 1:
Enter a number : 165
165 is a 3 digit number.

 Output 2:
 Enter a number : 65
 65 is not a 3 digit number.
 */