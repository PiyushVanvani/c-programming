#include<stdio.h>
#include<conio.h>

int main(void)
{
	FILE *fptr;
	char mystring[100];
	clrscr();
	fptr=fopen("C:/Users/DELL/Desktop/helloo.txt","r");

	fgets(mystring,100,fptr);
	printf("%s\n",mystring);
	fclose(fptr);

	getch();

}