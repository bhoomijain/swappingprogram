#include<stdio.h>
int main()
{
int x, y;
printf("Enter the values of x & y: \n");
scanf("%d%d",&x,&y);
printf("***Before swapping*** The value of x & y: %d %d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\n***After swapping*** The value of x & y: %d %d",x,y);
return 0;
}
