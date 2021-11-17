
#include <stdio.h>

#include<string.h>

#define MAX_SIZE 100

int TOP = 0;

char STACK[MAX_SIZE];

void push(char sym){

if(isStackFull())

{

printf("Stack is full\n");

return;

}

STACK[TOP++] = sym;

}

int isStackFull(){

if(TOP == MAX_SIZE)

{

return 1;

}else{

return 0;

}

}

int pop(){

if(isStackEmpty()){

printf("Stack is empty\n");

return -1;

}

return STACK[--TOP];

}

int isStackEmpty()

{

if(TOP==0)

return 1;

return 0;

}

int main()

{

char expre[MAX_SIZE];

int i;

int temp_top = 0;

printf("Give an Expression : ");

scanf("%s",expre);

for(i = 0;i < strlen(expre);i++){

if(expre[i] == '(' || expre[i] == '[' || expre[i] == '{')

{

push(expre[i]);

continue;

}

else if(expre[i] == ')' || expre[i] == ']' || expre[i] == '}')

{

temp_top = TOP - 1;

if(expre[i] == ')')

{

if(STACK[temp_top] == '(')

{

pop();

}

else

{

printf("\nUNBALANCED EXPRESSION0\n");

return 0;

}

}else if(expre[i] == ']')

{

if(STACK[temp_top] == '[')

{

pop();

}

else

{

printf("\nUNBALANCED EXPRESSION1\n");

return 0;

}

}else if(expre[i] == '}')

{

if(STACK[temp_top] == '{')

{

pop();

}

else

{

printf("\nUNBALANCED EXPRESSION2\n");

return 0;

}

}

}

}

if(TOP == 0)

{

printf("\nBALANCED EXPRESSION\n");

}else{

printf("UNBAlANCED EXPRESSION3\n");

}

return 0;

}

