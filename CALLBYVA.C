#include<stdio.h>
#include<conio.h>
int add(int,int);
int main(void)
{
 int first,second;
 clrscr();
 first=add(2,5);
 second=add(30,50);
 printf("\nans 1:%d \nans 2:%d",first,second);
 getch();
}
 int add(int x,int y)
{
 int ans;
 ans=x+y;
 return ans;

}