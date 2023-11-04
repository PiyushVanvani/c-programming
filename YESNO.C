#include<stdio.h>
#include<conio.h>

void main()
{
char answer;
clrscr();
printf("would you like to know my name");
printf("\ntype y for yes and n for no:");
answer=getchar();
if(answer=='y'||answer=='Y')
printf("\nHii i am Piyush");
else if(answer=='n'||answer=='N')
printf("\nsee you again");
getch();
}