/*
Using Else If condition Writw a program :
Enter the Cost Price and Selling Price of an item fro the keyboard and check whether it is Profit or Loss
*/

#include<stdio.h>
int main()
    {
        int cp,sp;
        printf("Enter Cost Price: ");
        scanf("%d",&cp);
        printf("Enter Selling Price: ");
        scanf("%d",&sp);
        if(sp==cp)
        {
        printf("Neither Profit Nor Loss");
        }
        else if(sp>cp){
        printf("Profit");
        }
        else{
        printf("Loss");
        }
        return 0;
    }

    /*
    Output 1:
    Enter Cost Price: 10
    Enter Selling Price: 10
    Neither Profit Nor Loss

    Output 2:
    Enter Cost Price: 24
    Enter Selling Price: 65
    Profit
    */