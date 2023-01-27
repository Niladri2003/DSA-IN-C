#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void list(int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    // struct node *ptr;
    new_node->data = val;
    new_node->next = NULL;
    // if (head == NULL)
    // {
    //     head = new_node;
    // }
    // else
    // {

    //     new_node->next = head;
    //     head = new_node;
    // }
    head = new_node;
    new_node->next = head;
    return;
}
int main()
{
    int size, val;
    struct node *ptr;

    printf("Enter linked list size");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter value->");
        scanf("%d", &val);
        list(val);
    }
    while (head != NULL)
    {
        printf(" %d ", head->data);
        head = head->next;
    }
    return 0;
}