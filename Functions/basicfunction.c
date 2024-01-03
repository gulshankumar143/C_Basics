/*
Every program start with the main function which is void main()
fun(){
    //code
}
*/
#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you?\n");
    return;
}
int main()
{
    greet();
    greet();
    greet();
    return 0;
}

/*
Output :

Good Morning
How are you?
Good Morning
How are you?
Good Morning
How are you?
*/