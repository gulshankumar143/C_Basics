/*
Display GP 100,50,25,...upto 'n' terms.
*/
#include<stdio.h>
int main()
{
    float n,i,a=100;
    printf("Enter the number of terms : ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
    printf("%f ",a);
    a=a/2;
    }
    return 0;
}

/*
    Output :
    Enter the number of terms : 5
    100.000000 50.000000 25.000000 12.500000 6.250000 
*/