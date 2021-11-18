#include <stdio.h>
#include <ctype.h>
#include <conio.h>

#define SIZE_STACK 20
int TOP = 0;
int STACK[SIZE_STACK];

int isSTACKFull()
{
	if (TOP == SIZE_STACK)
		return 1;
	return 0;
}
int isSTACKEmpty()
{
	if (TOP == 0)
		return 1;
	return 0;
}
void push(int val)
{
	if (isSTACKFull())
	{
		printf("Stack is Full. \n");
		return;
	}
	STACK[TOP++] = val;
}

int pop()
{
	if (isSTACKEmpty())
	{
		printf("Stack is Empty. \n");
		return -1;
	}
	return STACK[--TOP];
}
int getTopStack()
{
	if (isSTACKEmpty())
		return -1; 
	return STACK[TOP - 1];
}

int getPrecedenceOfOperator(char c, int on_stack)
{
	switch (c)
	{
	case '+':
		return 1;
	case '-':
		return 1;
	case '*':
		return 2;
	case '/':
		return 2;
	case '^':
		if (on_stack)
			return 3;
		else
			return 4;
	case '(':
		if (on_stack)
			return 0;
		else
			return 5;
	default:
		return -1; 
	}
}
void inFixToPostFix(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		char x = s[i], tmp;
		if (isalnum(x))
			printf("%c", x);
		else
		{
			if (x == ')')
			{
				while ((tmp = pop()) != '(')
					printf("%c", tmp);
				i++;
				continue;
			}
			while (getPrecedenceOfOperator(x, 0) <=
				getPrecedenceOfOperator(getTopStack(), 1))
				printf("%c", pop());
			push(x);
		}
		i++;
	}
	while (!isSTACKEmpty())
		printf("%c", pop());
}
int main()
{
	//char expression[] = "a+b";
	char expression[20] ;
	printf("Enter the inFix expression");
	gets_s(expression);
	inFixToPostFix(expression);
	_getch();
}
