#include<stdio.h>
#include<conio.h>
int add_function(int,int);
int sub_function(int,int);
int multiply_function(int,int);
int div_function(int,int);
void main()
{
	int main_result,second_call;
	clrscr();
	main_result=add_function(60,20);
	second_call=add_function(400,100);
	printf("Addition=%d\n Addition=%d\n",main_result,second_call);

	main_result=sub_function(60,20);
	second_call=sub_function(400,100);
	printf("Substraction=%d\n substraction=%d\n",main_result,second_call);

	main_result=multiply_function(60,20);
	second_call=multiply_function(400,100);
	printf("multiplication=%d\n multiplication=%d\n",main_result,second_call);

	main_result=div_function(60,20);
	second_call=div_function(400,100);
	printf("divison=%d\n divison=%d\n",main_result,second_call);

	getch();
}

int add_function(int num1,int num2)
{
	int add_result;
	add_result=num1+num2;
	return add_result;
}

int sub_function(int num1,int num2)
{
	int sub_result;
	sub_result=num1-num2;
	return sub_result;
}

int multiply_function(int num1,int num2)
{
	int multiply_result;
	multiply_result=(num1*num2);
	return multiply_result;
}

int div_function(int num1,int num2)
{
	int div_result;
	div_result=(num1/num2);
	return div_result;
}