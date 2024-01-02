/*
Take 3 Positive integers from the keyboard and print the greatest of them.
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter first number : ");
    scanf("%d",&b);
    printf("Enter first number : ");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("First number is greater than 2nd and 3rd.");
    if(b>c && b>a)
    printf("Second number is greater than 1st and 3rd.");
    else
    printf("Third number is greater than 1st and 2nd.");
    return 0;
}

/*
Output 1:
Enter first number : 56
Enter first number : 74
Enter first number : 89
Third number is greater than 1st and 2nd.

Output 2:
Enter first number :45
Enter first number :65
Enter first number :7 
Second number is greater than 1st and 3rd.
*/
