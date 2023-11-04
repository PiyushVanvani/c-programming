#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet;
clrscr();
printf("enter alphabet");
alphabet=getchar();
putchar('\n');
if(islower  (alphabet) )
putchar(toupper (alphabet) );
if(isupper(alphabet))
putchar(tolower (alphabet) );
getch();
}