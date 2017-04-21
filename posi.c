# include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter a number\n");
scanf("%d",&a);
if(a>0)
{
printf("%d is positive number\n");
}
else if(a<0)
{
printf("%d is negative number\n");
}
else
{
printf("%d is equal to zero\n");
}
return 0;
getch();
}
