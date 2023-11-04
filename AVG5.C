#include<stdio.h>
#include<conio.h>

void main()

{
int a,b,c,d,e,n;

clrscr();
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("enter c");
scanf("%d",&c);
printf("enter d");
scanf("%d",&d);
printf("enter e");
scanf("%d",&e);

n=(a+b+c+d+e)/5;


printf("ans=%d",n);

getch();
}