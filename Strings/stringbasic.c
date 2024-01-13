#include<stdio.h>
int main()
{
    char arr[5]={'a','t','l','r','s'};
    printf("%c\n",arr[1]);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}

/*
Output :
t
0061FF1B
0061FF1C
0061FF1D
0061FF1E
0061FF1F
*/