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
    struct node *temp;
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
            temp = head;
        }
        else
        {
            new_node->next = head;
            temp->next = new_node;
            temp = new_node;
            new_node->next = NULL;
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

void main()
{
    int n;
    head = create(head);
    display(head);
    // while (n != -1)
    // {
    //     printf("Choose following number to do operation on linked list\n");
    //     printf("1.Display the linked list\n");
    //     printf("2.Delete element from last\n");
    //     printf("3.Delete element from Front\n");
    //     printf("4.Size of linked list\n");
    //     printf("5.Exit from program\n");
    //     scanf("%d", &n);
    //     switch (n)
    //     {
    //     case 1:
    //         display(head);
    //         break;
    //     case 2:
    //         deletetail(head);
    //         top--;
    //         break;
    //     case 3:
    //         head = delete (head);
    //         top--;
    //         break;
    //     case 4:
    //         printf("Size of the linked lis->%d\n", top);
    //         break;
    //     case 5:
    //         printf("Exit\n");
    //         exit(1);
    //         break;
    //     default:
    //         printf("invalid input");
    //         break;
    //     }
    // }
}
