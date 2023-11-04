#include<stdio.h>
#include<conio.h>
int main(void)
{
    int A, B;
    float C;
    char ch;

    printf("Enter The Value ");
    scanf("%d%d", &A, &B);

    printf("\n1.For ADD:+");
    printf("\n2.For SUB:-");
    printf("\n3.For MUL:*");
    printf("\n4.For DIV:/\n");
    scanf("\n%c", &ch);

    switch(ch)
    {
	case '+':
	    C = A + B;
	    printf("Ans=%f", C);
	    break;
	case '-':
	    C = A - B;
	    printf("Ans=%f", C);
	    break;
	case '*':
	    C = A * B;
	    printf("Ans=%f", C);
	    break;
	case '/':
	    C = (float)A / B;
	    printf("Ans=%f", C);
	    break;
	default:
	    printf("Invalid function");
    }

    getch;
}
