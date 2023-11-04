#include<stdio.h>
#include<conio.h>

void main()
{
char character;
clrscr();
printf("press any key:");
character=getchar();
if(isalpha (character) > 0)
printf("letter:");
else if(isdigit (character) > 0)
printf("digit:");
else
printf("not alphanumeric":);
getch();




}
