/*
In Boolean Operator True==0 and False==1.
*/
#include<stdio.h>
int main()
{
    int a=5,b,c;
    b=a=15;
    c=a<15;
    printf("a=%d b=%d c=%d",a,b,c);
    return 0;
}

/*
Output :
a=15 b=15 c=0
*/