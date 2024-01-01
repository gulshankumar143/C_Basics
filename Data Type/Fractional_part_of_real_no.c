#include<stdio.h>
int main()
{
    float x,z;
    int y;
    printf("Enter the real vaue:\n");
    scanf("%f",&x);
    y=x;
    z=x-y;
    printf("The fractional part of %f is %f",x,z);
    return 0;
}
/*
Output:
Enter the real vaue:
2.7658
The fractional part of 2.765800 is 0.765800
*/