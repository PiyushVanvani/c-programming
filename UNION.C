#include<stdio.h>
#include<string.h>

union employee{
	char name[50];
	int age;
	float salary;
};
void main()
{
	union employee emp;
	strcpy(emp.name,"piyush");
	printf("employee name:%s",emp.name);
	emp.age=25;
	printf("employee age:%s",emp.age);
	emp.salary=25999;
	printf("employee salary:%f",emp.salary);
	return 0;
}

