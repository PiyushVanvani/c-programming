#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main(void)
{
float R,Ans;
clrscr();
printf("Enter The Radius:");
scanf("%f",&R);
Ans=pi*R*R;
printf("The Area of Circle is %f",Ans);
getch();
}