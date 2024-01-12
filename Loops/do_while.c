/*
In do while if the condition fails The code already runs at a time because the comdition is checked at the end.
*/
#include<stdio.h>
int main()
{
    int i=10;
    do
    {
        printf("Hello There!");
        i++;
    }
    while(i<10);
    return 0;
}

/*
Output :
Hello There!
*/