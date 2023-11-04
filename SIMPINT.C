#include<stdio.h>
#include<conio.h>

void main()

{
int p,r,n,a;
clrscr();

printf("Enter No.p");
scanf("%d",&p);
printf("Enter No.r");
scanf("%d",&r);
printf("Enter No.n");
scanf("%d",&n);

a=((p*r*n)/100);

printf("ans=%d",a);

getch();

}