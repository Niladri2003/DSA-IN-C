#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void insertbegin()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    int item;
    printf("enter data :-");
    scanf("%d", &item);
    if (head == NULL)
    {
        new_node->next = NULL;
        new_node->prev = NULL;
        new_node->data = item;
        head = new_node;
    }
    else
    {
        new_node->data = item;
        new_node->prev = NULL;
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    printf("\nNode inserted\n");
}
void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    insertbegin();
    insertbegin();
    insertbegin();
    display();

    return 0;
}