#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
int main()
{
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("Sum = %d",sum);
    return 0;
}

/*
Output :
Enter 1st number : 6
Enter 2nd number : 5
Sum = 11
*/