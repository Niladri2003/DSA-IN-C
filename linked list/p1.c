#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *end = NULL;
void display()
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
}
void addatbeginning()
{
    // for creating new node at begininning
    int key;
    printf("Enter the data to insert->");
    scanf("%d", &key);
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = key;

    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
        end = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}
void addatlast()
{
    if (head == NULL)
    { // as it is first node thats why i am calling add at first function
        addatbeginning();
    }
    else
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->next = NULL;
        int key;
        printf("Enter the data to insert at End->");
        scanf("%d", &key);
        new_node->data = key;
        end->next = new_node;
        end = new_node;
    }
}
void add_specific_position()
{
    int n;
    int key;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    printf("\nEnter the position->");
    scanf("%d", &n);
    if (n <= 1)
    {

        printf("\nEnter data to insert->");
        scanf("%d", &key);
        new_node->data = key;
        new_node->next = head;
        head = new_node;
    }
    while (--n && ptr != NULL)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        return NULL;
    }
    printf("\nEnter data to insert->");
    scanf("%d", &key);
    new_node->data = key;
    new_node->next = ptr->next;
    ptr->next = new_node;
}
void deletebeginning()
{
    if (head == NULL)
        printf("\nNothing to delete\n");
}

int main()
{
    addatbeginning();
    addatbeginning();
    display();
    add_specific_position();
    display();

    return 0;
}