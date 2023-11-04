#include<stdio.h>
#include<conio.h>

void main()
{
int i,n;
clrscr();
i=1;
printf("enter the value");
scanf("%d",&n);
while(i<=10)
{
printf("\n%d*%d=%d",n,i,n*i);

i++;
}
getch();



}