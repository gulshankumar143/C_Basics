/*
Take 3 numbers from the keyboard and check if it forms a Triangle or not.
*/
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter 1st side of the Triangle : ");
    scanf("%f",&a);
    printf("Enter 2nd side of the Triangle : ");
    scanf("%f",&b);
    printf("Enter 3rd side of the Triangle : ");
    scanf("%f",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b)
    printf("Triangle is formed by the sides %f %f and %f.",a,b,c);
    else
    printf("Triangle is not formed.");
    return 0;
}

/*
Output 1:
Enter 1st side of the Triangle : 3
Enter 2nd side of the Triangle : 4
Enter 3rd side of the Triangle : 6
Triangle is formed by the sides 3.000000 4.000000 and 6.000000.  

Output 2:
Enter 1st side of the Triangle : 1.7
Enter 2nd side of the Triangle : 2.3
Enter 3rd side of the Triangle : 4
Triangle is not formed.
*/