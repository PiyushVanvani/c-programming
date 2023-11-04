#include<stdio.h>
#include<conio.h>

void main()
{
	int A;
	clrscr();
	printf("enter no. A");
	scanf("%d",&A);

	if(A==0)
	printf("A is zero");
	else if (A>0)
	printf("A is positive");
	else
	printf("A is negative");

	getch();

	}
