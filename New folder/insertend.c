#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        printf(" %d ", head->data);
        struct node *v = head->next;
        while (v != head)
        {
            printf(" %d ", v->data);
            v = v->next;
        }
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *node1 = (struct node *)malloc(sizeof(struct node));
    struct node *node2 = (struct node *)malloc(sizeof(struct node));
    struct node *node3 = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    node1->data = 20;
    node2->data = 30;
    node3->data = 40;
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = head;

    display(head);
    return 0;
}