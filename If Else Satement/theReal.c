/*
    if(condition)    //Condition = Anything except Zero.
    {
        //code 
    }
    Then the code will run considering it as the true.
*/
#include<stdio.h>
int main()
{
    int a;
    char ch='A';
    if(3 + 2 % 5)
        printf("This works.\n");
    if(a=10)
        printf("Even this works.\n");
    if(-5)
        printf("Surprisingly even this works.\n");
    if('A')
        printf("Hello There!");
    return 0;
}

    /*
    Output :
    This works.
    Even this works.
    Surprisingly even this works.
    Hello There!
    */