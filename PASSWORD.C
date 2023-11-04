#include<stdio.h>
#include<conio.h>
#include<string.h>
int password(void);

int main(void)
{
password();

}
int password(void)
{
char name[25],pwd[25],ver[25];
int i,a,digi=0,up=0,low=0,schar=0;
printf("enter your name:");
gets(name);
printf("hello %s,enter your password:\n",name);
gets(pwd);
a=strlen(pwd);
if(a<5)
{
printf("error:password should contain minimum 5 characters:");
}
else if(a>12)
{
printf("error:password shouldn't exceed 12 characters:");
}
else
{
 for(i=0;pwd[i]!=NULL;i++)
 {
 if(pwd[i]>='A' && pwd[i]<='Z')
 up++;
 if(pwd[i]>='a' && pwd[i]<='z')
 low++;
 if(pwd[i]>='0' && pwd[i]<='9')
 digi++;
 if(pwd[i]=='@'||pwd[i]=='#'||pwd[i]=='$'||pwd[i]=='&')
 schar++;
 }
 }
 if(up==0)
 printf("there must be at least one uppercase\n");
 if(low==0)
 printf("there must be at least one lowercase\n");
 if(digi==0)
 printf("there must be at least one digit\n");
 if(schar==0)
 printf("there must be at least one special characters\n");
 else
 {
 printf("confirm your password\n");
 gets(ver);
 if(strcmp(pwd,ver)==0)
 printf("welcome %s,your password is verified\n",name);
 else
 printf("password did not match:\n");
 }
 getch();
}


