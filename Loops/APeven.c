/*
Print all the even numbers upto n terms starting from 2.
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=2;i<=2*n;i=i+2)
    printf("%d ",i);
    return 0;
}

/*
Output :
Enter the number of terms : 10
2 4 6 8 10 12 14 16 18 20
*/