#include<stdio.h>
#include<conio.h>
#define SIZE 20


int STACK[SIZE];
int TOS = -1;
int isEmpty();
int isFull();
void push(int);
int pop();
void evalToPost(char[]);


int main()
{

	_getch();
}

int isEmpty()
{
	if (TOS == -1)
		return 1;
	return 0;
}

int isFull()
{
	if (TOS == (SIZE - 1))
		return 1;
	return 0;
}

void push(int symbol)
{
	if (isFull())
		printf("\nStack Overflow");
	else
	{
		STACK[++TOS] = symbol;
	}
}

int pop()
{
	if (isEmpty())
		printf("\nStack Underflow");
	else
		return (STACK[TOS--]);
}
