#include<stdio.h>
int main()
{
    int x=4,y=3,z;
    z=x-- -y;
    printf("%d\n%d\n%d",x,y,z);
    return 0;
}

/*
Output :
3
3
1
*/