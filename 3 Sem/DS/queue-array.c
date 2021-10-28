#include<stdio.h>
#include<conio.h>
#define SIZE 5

int isFull();
int isEmpty();
void ENQUEUE(int);
void DEQUEUE();
void PEEK();
void DISPLAY();
int queue[SIZE];
int qFront= -1;
int qRear = -1;



int main()
{
	int choice = 0, element = 0;
	while (1)
	{
		printf("\nMenu");
		printf("\n1. ENQUEUE");
		printf("\n2. DEQUEUE");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n5. EXIT\n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1: printf("\nEnter  the element to be added");
			scanf_s("%d", &element);
			ENQUEUE(element);
			break;
		case 2: DEQUEUE();
			break;
		case 3: PEEK();
			break;
		case 4: DISPLAY();
			break;
		case 5: return 0;
		default: printf("\nEnter correct choice");
		}

	}
	_getch();
}

int isFull()
{
	if ( qRear == (SIZE - 1))
		return 1;
	return 0;
}
int isEmpty()
{
	if ( qFront == -1)
		return 1;
	return 0;
}

void ENQUEUE(int  element) {
	if (isFull())
	{
		printf("\n Queue Overflow");
		return;
	}
	else
	{
		if (qFront == -1)
			qFront = 0;
		queue[++qRear] = element;
	}
}
void DEQUEUE()
{
	if (isEmpty())
	{
		printf("\n Queue Underflow");
		return;
	}
	else
	{
		qFront++;
		printf("\n Element Deleted");
	}
}
void PEEK()
{
	if (isEmpty())
	{
		printf("\n Queue Underflow");
		return;
	}
	else
		printf("Top element : %d", queue[qFront]);
}
void DISPLAY()
{
	int i;
	if (isEmpty())
	{
		printf("\n Queue Underflow");
		return;
	}
	else
	{
		for (i = qFront; i <= qRear; i++)
			printf("%d\t", queue[i]);
	}
}
