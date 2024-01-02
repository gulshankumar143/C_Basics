/*
Take a Positive Integer from the keyboard and check if it is divisible by 5 and 3.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0){
      if(n%3==0){
      printf("%d is divisible by 3 and 5.",n);
    }
    else{
    printf("%d is not divisible by 3 and 5.",n);
    }
    }
    return 0;  
}

/*
Output 1:
Enter a number : 75
75 is divisible by 3 and 5.

Output 2:
Enter a number : 25
25 is not divisible by 3 and 5.
*/