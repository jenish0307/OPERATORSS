#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z,
area;
clrscr();
printf("enter the value of x : ");
scanf("%d",&x);
printf("enter the value of y : ");
scanf("%d",&y);
printf("enter the value of z : ");
scanf("%d",&z);
area=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
printf("x + y + z cube = %d",area);
getch();
}