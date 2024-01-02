#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Hello World\n");
    }
    return 0;
}

/*
Output :
Enter a number : 5
Hello World
Hello World
Hello World
Hello World
Hello World
*/