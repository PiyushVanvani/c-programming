#include<stdio.h>
#include<conio.h>

void main()
{
int A,B,C;
clrscr();

printf("enter no.A");
scanf("%d",&A);
printf("enter no.B");
scanf("%d",&B);
printf("enter no.C");
scanf("%d",&C);

C=A;
A=B;
B=C;

printf("\nA=%d\nB=%d",A,B);

getch();

}
