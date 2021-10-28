#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void push();
int isEmpty();
void pop();
void peek();
void display();

struct node
{
	int data;
	struct node *next;
};

struct node *TOS = NULL;

int main()
{
	int choice = 0, element = 0;
	while (1)
	{
		printf("\nMenu");
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n5. Exit\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5: return 0;
		default: printf("\nEnter correct choice");
		}

	}
	_getch();
}
int isEmpty()
{
	if (TOS == NULL)
		return 1;
	return 0;
}

void push()
{
	struct node *newNode;
	newNode = (struct node*)(malloc(sizeof(struct node)));
	printf("\n Enter element : ");
	scanf_s("%d", &newNode->data);
	newNode->next = NULL;
	if (isEmpty())
	{
		TOS = newNode;
	}
	else
	{
		newNode->next = TOS;
		TOS = newNode;
	}
	printf("Node Inserted");
}



void pop()
{
	struct node *ptr;
	if (isEmpty())
	{
		printf("List is Empty");
		return;
	}
	else
	{
		ptr = TOS;
		TOS = TOS->next;
		free(ptr);
	}
	printf("Node Deleted");
}

void peek()
{
	struct node *ptr;
	if (isEmpty())
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		printf("TOP element : %d", TOS->data);
	}
}
void display()
{
	struct node *ptr;
	if (TOS == NULL)
	{
		printf("\n Stack Empty");
		return;
	}
	ptr = TOS;
	printf("\n Stack :");
	while (ptr != NULL)
	{
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}
}
