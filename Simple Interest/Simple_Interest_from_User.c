#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter Principle:\n");
    scanf("%f",&p);
    printf("Enter Rate:\n");
    scanf("%f",&r);
    printf("Enter Time Period:\n");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The Simple Interest is %f",si);
    return 0;
}
/*
Output:
Enter Principle:
2000         
Enter Rate:
10
Enter Time Period:
5
The Simple Interest is 1000.000000
*/