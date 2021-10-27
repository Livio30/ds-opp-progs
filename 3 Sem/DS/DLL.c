// C program for the all operations in
// the Doubly Linked List
#include <stdio.h>
#include <stdlib.h>

void traverse();
void insertAtFront();
void insertAtEnd();
void insertAtPosition();
void deleteFirst();
void deleteEnd();
void deletePosition();

// Linked List Node
struct node {
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;
// Driver Code
int main()
{
	int choice;
	while (1) {

		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at"
			" starting\n");
		printf("\t3 For insertion at"
			" end\n");
		printf("\t4 For insertion at "
			"any position\n");
		printf("\t5 For deletion of "
			"first element\n");
		printf("\t6 For deletion of "
			"last element\n");
		printf("\t7 For deletion of "
			"element at any position\n");
		printf("\t8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePosition();
			break;

		case 8:
			exit(1);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			continue;
		}
	}
	return 0;
}
// Function to traverse the linked list
void traverse()
{
	// List is empty
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	// Else print the info
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("info = %d\n", temp->info);
		temp = temp->next;
	}
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int info;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &info);
	temp->info = info;
	temp->prev = NULL;

	// Pointer of temp will be
	// assigned to start
	temp->next = start;
	start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
	int info;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &info);
	temp->info = info;
	temp->next = NULL;
	trav = start;

	// If start is NULL
	if (start == NULL) {

		start = temp;
	}

	// Changes Links
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
	int info, pos, i = 1;
	struct node *temp, *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;

	// Enter the position and info
	printf("\nEnter position : ");
	scanf("%d", &pos);
	printf("\nEnter number to be inserted: ");
	scanf("%d", &info);
	newnode->info = info;
	temp = start;

	// If start==NULL,
	if (start == NULL) {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}

	// If position==1,
	else if (pos == 1) {
		newnode->next = start;
		newnode->next->prev = newnode;
		newnode->prev = NULL;
		start = newnode;
	}

	// Change links
	else {
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		temp->next->prev = newnode;
	}
}

// Function to delete from the front
// of the linked list
void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
		free(temp);
	}
}

// Function to delete from the end
// of the linked list
void deleteEnd()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else {
		temp->prev->next = NULL;
		free(temp);
	}
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
{

	struct node *temp;
    int del_info;
    printf("please enter info item which you wish to delete");
    scanf("%d", &del_info);
    temp = start;
    while (temp != NULL)
    {

        if (temp->info == del_info)
        {
            if (temp->prev == NULL && temp->next == NULL) //if only node
            {
                free(temp);
                start = NULL;
                break;
            }
            if (temp->prev == NULL) //if first node
            {
                temp->next->prev = NULL;
                start = temp->next;
                printf("\nElement Deleted");

                free(temp);
                break;
            }
            if (temp->next == NULL) //if last node
            {
                temp->prev->next = NULL;
                printf("\nElement Deleted");

                free(temp);
                break;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            printf("\nElement Deleted");
            free(temp);
            break;
        }
        temp = temp->next;
}
}

