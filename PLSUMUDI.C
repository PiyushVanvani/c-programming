#include<stdio.h>
#include<conio.h>

void main()
{

	int A,B,C;
	clrscr();
	printf("Enter The Value A");
	printf("Enter The Value B");
	scanf("%d,%d",&A,&B);

	printf("\n1.For ADD:1");
	printf("\n2.For SUB:2");
	printf("\n3.For MULTIPLY:3");
	printf("\n4.For DIV:4");
	scanf("%d",&C);

	switch(C)

	{
	case 1:

	{
	C=A+B;
	print("%d",&c);
	break;
	}
	{
	case 2:
	{
	C=A-B;
	print("%d",&c);
	break;
	}

	case 3:
	{
	C=A*B;
	print("%d",&c);
	break;
	}

	case 4:
	{
	C=A/B;
	print("%d",&c);
	break;
	}

	default:
	{
	printf("invalid function");
	}

}