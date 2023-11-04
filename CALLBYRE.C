#include<stdio.h>
#include<conio.h>
int swap(int*,int*);
int main(void)
{
 int num1=6200,num2=3300,ans;
 clrscr();
 printf("\nBefore Swapping\n num1=%d  num2=%d",num1,num2);
 ans=swap(&num1,&num2);
 printf("\nAfter Swapping\n num1=%d  num2=%d",num1,num2);

 getch();

}
int swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;

 return 0;
}