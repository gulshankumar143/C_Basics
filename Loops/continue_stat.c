/*
WAP to print all the Odd Numbers from 1-100 using Continue Statement.
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
        continue;
        }
    printf("%d ",i);
    }
    return 0;
}

/*
    Output :
    1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99
*/