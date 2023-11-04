#include<stdio.h>
#include<conio.h>

void main()
{
int num;
printf("enter a no.");
scanf("%d",&num);

if (num<100)
printf("smaller than 100");
else
printf("more than 100");
getch();
}