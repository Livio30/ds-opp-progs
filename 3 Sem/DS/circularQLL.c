#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void enqueue();
int isEmpty();
void dequeue();
void peek();
void display();

struct node
{
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int main()
{
	int choice = 0, element = 0;
	while (1)
	{
		printf("\n Menu");
		printf("\n1. ENQUEUE");
		printf("\n2. DEQUEUE");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n5. EXIT\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
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
	if (front == NULL)
		return 1;
	return 0;
}

void enqueue()
{
	struct node *newNode, *temp;
	int element;
	newNode = (struct node*)(malloc(sizeof(struct node)));
	printf("\n Enter element : ");
	scanf_s("%d", &element);
	newNode->data = element;
	newNode->next = NULL;
	if (front == NULL)
	{
		front = newNode;
		newNode->next = front;
		rear = newNode;
	}
	else
	{
		newNode->next = front;
		rear->next = newNode;
		rear = newNode;
	}
	printf("Node Inserted");
}

void dequeue()
{
	struct node *temp;
	if (isEmpty())
	{
		printf("Queue Empty");
		return;
	}
	else if (front == rear)
	{
		temp = front;
		front = rear = NULL;
		free(temp);
	}
	else {
	temp = front;

	front = front->next;
	rear->next = front;
	free(temp);
	}
	printf("\n Element Deleted");
}

void peek()
{
	if (isEmpty())
	{
		printf("Queue Empty");
		return;
	}
	printf("Front element : %d", front->data);
}

void display()
{
	struct node *ptr;
	if (front == NULL)
	{
		printf("\n Queue Empty");
		return;
	}
	ptr = front;
	printf("\n Queue :");
	printf("%d\t", ptr->data);
	ptr = ptr->next;
	while (ptr != front)
	{
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}
}
