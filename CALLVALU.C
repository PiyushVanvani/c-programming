#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int main_result,second_call;
clrscr();
main_result=add(20,60);
second_call=add(100,300);
printf("ans:%d   ans:%d",main_result,second_call);

}
void add(int x,int y)
{
int ans;
sum=x+y;
return sum;
}
