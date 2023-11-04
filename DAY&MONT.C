#include<stdio.h>
#include<conio.h>

void main()
{
int months,days;
clrscr();
printf("enter days");
scanf("%d",&days);
months=days/30;
days=days%30;
printf("months=%d days=%d",months,days);
getch();
}