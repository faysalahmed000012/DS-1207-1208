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

    return 0;
}