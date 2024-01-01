/*
Simple Interest= (Principle Value * Rate * Time Period) / 100
*/
#include<stdio.h>
int main()
{
    float SI,p,r,t;
    p=2000;
    r=5;
    t=5;
    SI=(p*r*t)/100;
    printf("The simple Interest is %f",SI);
    return 0;
}
/*
Output:
The simple Interest is 500.000000
*/