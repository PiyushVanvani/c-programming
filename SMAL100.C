#include<stdio.h>
#include<conio.h>

void main()
{
int no;
printf("enter a no.");
scanf("%d",&no);

if (no<100)
printf("smaller than 100");
else
printf("more than 100");
getch();
}