/*
 Write a program to print the table of any numbers.
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number whose table you want : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("%d * %d = %d \n",n,i,n*i);
    return 0;
}

/*
    Output :
    Enter a number whose table you want : 4
      4 * 1 = 4
      4 * 2 = 8
      4 * 3 = 12
      4 * 4 = 16
      4 * 5 = 20
      4 * 6 = 24
      4 * 7 = 28
      4 * 8 = 32
      4 * 9 = 36
      4 * 10 = 40
*/