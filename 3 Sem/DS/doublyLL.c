#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void InsertBegin();
void InsertAtEnd();
void deleteByValue();
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
int main()
{
    int choice = 2;
    while (1)
    {

        printf("\n___________MENU___________");
        printf("\n 1.Create");
        printf("\n 2.Insert at the beginning");
        printf("\n 3.Insert at the end");
        printf("\n 4.delete by value");
        printf("\n 5.Display");
        printf("\n 6.Exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            InsertBegin();
            break;
        case 3:
            InsertAtEnd();
            break;
        case 4:
            deleteByValue();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\n Wrong Choice: ");
            break;
        }
    }
    return 0;
}
void create()
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL) //if LL is empty
    {
        head = newnode;
        newnode->prev = NULL;
    }
    else
    {
        //insertion at beginning
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = NULL;
        head = newnode;
    }
}

void InsertBegin()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL) //if LL is empty
    {
        head = newnode;
        newnode->prev = NULL;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = NULL;
        head = newnode;
    }
}
void InsertAtEnd()
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the data value for the node:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL) //if LL is empty
    {
        head = newnode;
        newnode->prev = NULL;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ->", ptr->data);
            ptr = ptr->next;
        }
    }
}

void deleteByValue()
{

    struct node *temp;
    int del_data;
    printf("please enter data item which you wish to delete");
    scanf("%d", &del_data);
    temp = head;
    while (temp != NULL)
    {

        if (temp->data == del_data)
        {
            if (temp->prev == NULL && temp->next == NULL) //if only node
            {
                free(temp);
                head = NULL;
                break;
            }
            if (temp->prev == NULL) //if first node
            {
                temp->next->prev = NULL;
                head = temp->next;
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
