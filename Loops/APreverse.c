/*
Print the AP 100,97,94,91,... upto the positive integer.
*/
#include<stdio.h>
int main()
{
    int i,a=100;
    for(i=1;a>0;i++)
    {
    printf("%d ",a);
    a=a-3;
    }
    return 0;
}

/*
Output :
100 97 94 91 88 85 82 79 76 73 70 67 64 61 58 55 52 49 46 43 40 37 34 31 28 25 22 19 16 13 10 7 4 1
*/