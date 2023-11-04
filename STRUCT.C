#include<stdio.h>
#include<conio.h>
struct student
{
	int stud_rollno;
	char name[100];
	float stud_marks;

};
int main(void)
{
 struct student s1,s2,s3;
 clrscr();
 s1.stud_rollno=40;
 strcpy(s1.name,"Rakesh seeti");
 s1.stud_marks=57;

 s2.stud_rollno=6;
 strcpy(s2.name,"Ramesh joshi");
 s2.stud_marks=76;

 s3.stud_rollno=70;
 strcpy(s3.name,"seema patel");
 s3.stud_marks=90;

 printf("\n-----------------------------------------------------------------\n");
 printf("\nROLL_NO\t");
 printf("\tSTUDENT_NAME\t");
 printf("\tSTUDENT_MARKS\n");
 printf("\n-----------------------------------------------------------------\n");

 printf("\t%d\t",s1.stud_rollno);
 printf("%s\t",s1.name);
 printf("\t%f\n",s1.stud_marks);

 printf("\t%d\t",s2.stud_rollno);
 printf("%s\t",s2.name);
 printf("\t%f\n",s2.stud_marks);

 printf("\t%d\t",s3.stud_rollno);
 printf("%s\t",s3.name);
 printf("\t%f\n",s3.stud_marks);



 getch();

}
