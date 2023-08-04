#include<stdio.h>
#include<conio.h>
main()
{
int x,y,area;
clrscr();
printf("enter the value of x : ");
scanf("%d",&x);
printf("enter the value of y : ");
scanf("%d",&y);
area=(x*x*x)-((3*x*y)-(x+y))-(y*y*y);
printf("x - y cube = %d",area);
getch();
}