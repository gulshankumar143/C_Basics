/*
Take 3 Positive integers from the keyboard and print the greatest of them.
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter first number : ");
    scanf("%d",&b);
    printf("Enter first number : ");
    scanf("%d",&c);
    if(a>b){ //Second Number is out of the loop.
        if(a>c)
        printf("First number %d is greater than 2nd and 3rd.",a);
        else  // a<c -> b < a <c
        printf("Third number %d is greater than 1st and 2nd.",c);
           }
        else{  //b > a -> First Number is not the greatest.
        if(b>c)
            printf("Second number %d is greater than 1st and 3rd.",b);
            else  //c > b  ->   a < b < c 
            printf("Third number %d is greater than 1st and 2nd.",c);
        }
    return 0;
}

/*
Output 1:
Enter first number : 65
Enter first number : 76
Enter first number : 98
Third number 98 is greater than 1st and 2nd.

Output 2:
Enter first number : 76
Enter first number : 111
Enter first number : 93
Second number 111 is greater than 1st and 3rd.
*/
