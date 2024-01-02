/*
Take a Positive Integer from the keyboard and check if it is divisible by 5 or 3 but not divisible by 15.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
      if(n%15==0){
      printf("%d is divisible by 3 or 5 but also by 15.",n);
    }
    else{
    printf("%d is divisible by 3 or 5 but not divisible by 15.",n);
    }
    }
    return 0;  
}

/*
Output 1:
Enter a number : 9
9 is divisible by 3 or 5 but not divisible by 15.

Output 2:
Enter a number : 30
30 is divisible by 3 or 5 but also by 15.
*/
