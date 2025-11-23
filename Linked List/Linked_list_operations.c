#include <stdio.h>
#include <stdlib.h>

typedef struct mylist
{
    int data;
    struct mylist *next;
} node;

void Insert(node *s, int data)
{
    while (s->next != NULL)
    {
        s = s->next;
    }

    s->next = (node *)malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}

void Display(node *s)
{
    s = s->next;
    while (s != NULL)
    {
        printf("%d -> ", s->data);
        s = s->next;
    }
    printf("NULL\n");
}

void Search(node *s, int data)
{
    int count = 0;
    while (s->next != NULL)
    {
        if (s->next->data == data)
        {
            count++;
        }
        s = s->next;
    }
    printf("Total %d results found\n", count);
}

void DeleteNode(node *s, int data)
{
    while (s->next != NULL)
    {
        if (s->next->data == data)
        {
            s->next = s->next->next;
            return;
        }
        s = s->next;
    }
}

// insertion at the beginning
void Insertatbegin(node *s, int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    newNode->next = s->next;
    s->next = newNode;
}

void InsertatEnd(node *s, int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    while (s->next != NULL)
    {
        s = s->next;
    }

    s->next = newNode;
}

void InsertatMiddle(node *s, int data, int position)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    int count = 1;

    while (s->next != NULL && count < position)
    {
        s = s->next;
        count++;
    }

    // insert new node
    newNode->next = s->next;
    s->next = newNode;
}

int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->next = NULL;

    Insert(head, 10);
    Insert(head, 20);
    Insert(head, 30);
    Insert(head, 40);
    Insert(head, 50);

    printf("Linked List elements:\n");
    Display(head);

    Search(head, 40);

    DeleteNode(head, 30);
    Display(head);

    Insertatbegin(head, 12);
    Display(head);

    InsertatEnd(head, 67);
    Display(head);

    InsertatMiddle(head, 23, 2);
    Display(head);

    return 0;
}