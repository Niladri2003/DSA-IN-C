#include <stdio.h>
#include <stdlib.h>
int top = 0;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *create(struct node *head)
{
    struct node *new_node;
    int num;
    printf("Enter your data,\npress -1 to terminate\n");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (head == NULL)
        {
            new_node->next = NULL;
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
        printf("\nEnter your data\n");
        scanf("%d", &num);
        top++;
    }
    return head;
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d   ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *delete (struct node *top)
{
    if (top == NULL)
    {
        printf("list is empty");
        return 0;
    }
    struct node *ptr;
    ptr = top->next;
    free(top);

    return ptr;
}
void deletetail(struct node *ptr)
{
    void *ptr1;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
}
void insert(struct node *ptr)
{
}

void main()
{
    int n;
    head = create(head);
    while (n != -1)
    {
        printf("Choose following number to do operation on linked list\n");
        printf("1.Display the linked list\n");
        printf("2.Delete element from last\n");
        printf("3.Delete element from Front\n");
        printf("4.Size of linked list\n");
        printf("5.Exit from program\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            display(head);
            break;
        case 2:
            deletetail(head);
            top--;
            break;
        case 3:
            head = delete (head);
            top--;
            break;
        case 4:
            printf("Size of the linked lis->%d\n", top);
            break;
        case 5:
            printf("Exit\n");
            exit(1);
            break;
        default:
            printf("invalid input");
            break;
        }
    }
}
