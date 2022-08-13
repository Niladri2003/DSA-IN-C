#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *Create(struct node *head)
{
    struct node *new_node;
    int num;
    printf("Enter -1 to end insertion\n");
    printf("\nEnter data\n");
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
    }
    return head;
}
void dis(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\n%d\t", ptr->data);
        ptr = ptr->next;
    }
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

int find(struct node *ptr, int a)
{
    while (ptr != NULL)
    {
        if (ptr->data == a)
            return 1;
        else
            return 0;
        ptr = ptr->next;
    }
}
struct node *delfirst(struct node *head)
{
    void *ptr;
    ptr = head->next;
    head = ptr;
    return head;
}

int main()
{
    head = Create(head);
    struct node *ptr = head;
    dis(head);
    printf("\n");
    // printf("Enter the number to find\n");
    // scanf("%d", &num);
    // var = find(ptr, num);
    // if (var == 0)
    //     printf("Not found");
    // else

    printf("--------");
    head = delete (head);
    while (head != NULL)
    {
        printf("\n%d\t", head->data);
        head = head->next;
    }
    return 0;
}