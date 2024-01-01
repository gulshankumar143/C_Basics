/*
Enter any year from keyboard and check whether it is leap year or not.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Year : ");
    scanf("%d",&x);
    if(x%4==0)
    printf("%d is Leap Year.",x);
    else
    printf("%d is not a Leap Year.",x);
    return 0;
}

/*

Output 1:
Enter a Year : 3024
3024 is Leap Year.

Output 2:
Enter a Year : 2026
2026 is not a Leap Year.

*/