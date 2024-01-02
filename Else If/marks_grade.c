/*
Grading of Students with the help of percentage :
If Percentage is -
>90 && <=100 -> A Grade 
>80 && <=90 -> B Grade 
>70 && <=80 -> C Grade 
>60 && <=70 -> D Grade 
>50 && <=60 -> E Grade 
<=50 -> F Grade 
*/
#include<stdio.h>
int main()
{
    float n;
    printf("Enter Percentage : ");
    scanf("%f",&n);
    if(n>90)
        printf("A Grade");
    else if(n>80)
         printf("B Grade");
    else if(n>70)
        printf("C Grade");
    else if(n>60)
        printf("D Grade");
    else if(n>50)
        printf("E Grade");
    else
        printf("F Grade");
    return 0;
}

/*
Outout 1:
Enter Percentage : 89.999
B Grade

Output 2:
Enter Percentage : 43
F Grade
*/