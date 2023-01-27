#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
// method 1 TC O(n)
struct node *addatend(int key)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = key;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = head;
        return new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next->next = new_node;
        new_node->next = head;
    }
    return head;
}
// method2 TC-O(1)
struct node *addatend2(struct node *head, int key)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    int var;
    new_node->data = key;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = head;
        return head;
    }
    else
    {
        new_node->next = head->next;
        head->next = new_node;
        var = head->data;
        head->data = new_node->data;
        new_node->data = var;
    }
}
void display(struct node *head)
{
    if (head == NULL)
        return;
    printf(" %d ", head->data);
    struct node *var = head->next;
    while (var != head)
    {
        printf(" %d ", var->data);
        var = var->next;
    }
}

int main()
{

    struct node *node2 = (struct node *)malloc(sizeof(struct node));
    struct node *node3 = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    node2->data = 20;
    node3->data = 30;
    head->next = node2;
    node2->next = node3;
    node3->next = head;

    display(head);
    int key;
    printf("\nEnter your data->");
    scanf("%d", &key);
    head = addatend(key);
    display(head);
    return 0;
}