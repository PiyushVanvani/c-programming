#include<stdio.h>
#include<conio.h>
void main()
{
 int p,i,ans,pow,num;
 clrscr();
 printf("enter no.");
 scanf("%d",&num);
 printf("enter power");
 scanf("%d",&pow);
 p=1;
 for(i=1;i<=pow;i++)

 {
	if(i==0)
	p=1;
	else

	p=p*num;


	printf("\n%d ",p);

 }
	getch();
}