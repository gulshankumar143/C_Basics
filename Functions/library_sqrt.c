/*
WAP to find the square root of any number ?
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a number : ");
    scanf("%f",&a);
    float root=sqrt(a);
    printf("The square root of %f is %f",a,root);
    return 0;
}

/*
Output 1:
Enter a number : 12.25
The square root of 12.250000 is 3.500000

Output 2:
Enter a number : 16
The square root of 16.000000 is 4.000000
*/