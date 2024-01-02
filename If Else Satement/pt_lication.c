/*
Take the points(x,y) from the keyboard and check whether it lies on the x-axix, y-axis, or origin.
*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates of x and y axix : ");
    scanf("%d  %d",&x,&y);
    if(x==0 && y==0){
        printf("Points lies on the origin.");
    }
    else if(y==0){
        printf("Points lies on X-axix.");
    }
    else if(x==0){
        printf("Points lies on Y-axix");
    }
    else {
        printf("Points doesn't lies on the X or Y axis and It is not Origin.");
    }
    return 0;
}

/*
Output 1:
Enter the coordinates of x and y axix : 6
7
Points doesn't lies on the X or Y axis and It is not Origin.

Output 2:
Enter the coordinates of x and y axix : 0 0
Points lies on the origin.
*/