// Write a menu driven program in C or C++ to implement a stack using single
// linked list and perform the following operations.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int);
void pop();
void display();
int main()
{

    push(3);
    push(4);
    display();
    pop();
    display();
    return 0;
}

void push(int a)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = a;
    if (top == NULL)
    {
        top = new_node;
        new_node->next = NULL;
    }
    else
    {
        new_node->next = top;
        top = new_node;
    }
}
void pop()
{
    if (top == NULL)
    {
        printf("\nStack is Empty\n");
        exit(1);
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("\nPoped element is %d\n", temp->data);
        free(temp);
    }
}
void display()
{
    if (top == NULL)
    {
        printf("\nStack is Empty\n");
        exit(1);
    }
    else
    {
        struct node *temp = top;
        while (temp != NULL)
        {
            printf(" %d ", temp->data);
            temp = temp->next;
        }
    }
}