//Stack Data Structure
#include <stdio.h>
#define SIZE_STACK 20
int TOP = 0; //Pointer to the STACK
int STACK[SIZE_STACK];
void push(int val)
{
if(isSTACKFull())
{
printf("Stack is Full. \n");
return;
}
STACK[TOP++] = val;
//TOP++;
}
int isSTACKFull()
{
if(TOP==SIZE_STACK)
return 1;
return 0;
}
int pop()
{
if(isSTACKEmpty())
{
printf("Stack is Empty. \n");
return -1;
}
return STACK[--TOP];
}
int getTopStack()
{
if(isSTACKEmpty())
return -1; //STACK EMPTY
return STACK[TOP-1];
}
int isSTACKEmpty()
{
if(TOP==0)
return 1;
return 0;
}
int getPrecedenceOfOperator(char c, int on_stack)
{
switch(c)
{
case '+':
case '-':
return 1;
case '*':
case '/':
return 2;
case '^':
if(on_stack)
return 9;
else
return 10;
case '(':
if(on_stack)
return 0;
else
return 20;
default:
return -1; //STACK EMPTY
}
}
void inFixToPostFix(char s[])
{
int i=0;
while(s[i]!='\0')
{
char x = s[i], tmp;
if((x>=65 && x<=90) || (x>=97 && x<=122))
printf("%c",x);
else
{
if(x==')')
{
while((tmp = pop()) != '(')
printf("%c",tmp);
i++;
continue;
}
while(getPrecedenceOfOperator(x,0) <=
getPrecedenceOfOperator(getTopStack(),1))
printf("%c",pop());
push(x);
}
i++;
}
while(!isSTACKEmpty())
printf("%c",pop());
}
int main()
{
inFixToPostFix("x^y/(a*z)+t");
return 0;
}
