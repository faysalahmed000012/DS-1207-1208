#include <stdio.h>
#include <stdlib.h>

typedef struct myList
{
    int data;
    struct myList *next
} node;

void Insert(node *s, int elm)
{

    while (s->next != NULL)
    {
        s = s->next;
    }

    s->next = (node *)malloc(sizeof(node));
    s->next->data = elm;
    s->next->next = NULL;
}

void Display(node *s)
{
    s = s->next;

    while (s != NULL)
    {
        printf("%d ", s->data);
        s = s->next;
    }
}

int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->next = NULL;

    return 0;
}