#include<stdio.h>
int main()
{
    int x=5,y,z;
    y=x++;
    z=++x;
    printf("%d\n%d\n%d",x,y,z); //x++ means, use x, then Increment.
                                  //++x means, increment then use.
    return 0;
}

/*
Output :
7
5
7
*/