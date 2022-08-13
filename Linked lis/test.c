#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
void creat_list(int);
void add_beg();
void add_end();
void display();
int m, n, i;
void main()
{
    int n1;
    printf("\n\n");
    printf("1=Creat_link_List, 2=Add_Beg, 3=Add_Front, 4=Display, 5=Exit_loop\n");
    while (1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &n1);
        switch (n1)
        {
        case 1:
            printf("Enter the number of nodes:\n");
            scanf("%d", &n);
            creat_list(n);
            break;
        case 2:
            add_beg();
            break;
        case 3:
            add_end();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Wrong Choice!\n");
            break;
        }
    }
}
void creat_list(int num1)
{
    struct node *new_node;
    struct node *temp;
    int num;

    while (num1 != 0)
    {
        printf("Enter your data,\n");
        scanf("%d", &num);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
            temp = start;
        }
        else
        {
            new_node->next = start;
            temp->next = new_node;
            temp = new_node;
            new_node->next = NULL;
        }

        num1--;
    }
}
void add_beg(int num)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = start;
    start = tmp;
}
void add_end(int num)
{
    struct node *tmp, *q;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = NULL;
    if (start = NULL)
    {
        start = tmp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = tmp;
    }
}
void display()
{
    struct node *q;
    if (start == NULL)
        printf("List is empty!\n");
    else
    {
        q = start;
        while (q != NULL)
        {
            printf("%d", q->data);
            q = q->next;
        }
    }
}