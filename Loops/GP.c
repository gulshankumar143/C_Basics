/*
Display GP 3,12,48,...upto 'n' terms.
*/
#include<stdio.h>
int main()
{
    int n,i,a=3;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d ",a);
    a=a*4;
    }
    return 0;
}

/*
    Output :
    Enter the number of terms : 5
    3 12 48 192 768 
*/