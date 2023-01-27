#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void addatbegin()
{

    int value;
    printf("Enter -1 to exit");
    printf("Enter Your data:");
    scanf("%d", &value);
    while (value != -1)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = value;

        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
        printf("Enter -1 to exit");
        printf("Enter Your data:");
        scanf("%d", &value);
    }
}
void addatend()
{
    int value;
    printf("Enter -1 for exit\nor\nEnter data:");
    scanf("%d", &value);
    while (value != -1)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = value;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        printf("Enter -1 for exit\n or\n Enter data:");
        scanf("%d", &value);
    }
}
void deleteatbegin(){
    
}
void printlist()
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
    printf("Enter data in Linked list\n");
    // addatbegin();
    // printlist();
    addatend();
    printlist();

    return 0;
}