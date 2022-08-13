#include <stdio.h>
#include <stdlib.h>
#define max 10
int stackarr[max];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if (isFull())
    {
        printf("Stack is undeflow\n");
        exit(1);
    }
    top++;
    stackarr[top] = data;
}

int pop()
{
    int var;
    if (isEmpty())
    {
        printf("stack is underflow\n");
        return -1;
    }
    var = stackarr[top];
    top--;
    return (var);
}
void peek()
{
    if (isEmpty())
    {
        printf("stack is Empty");
        return;
    }
    printf("peek element of stack is %d", stackarr[top]);
}

// int size()
int main()
{
    int choose, data;
    while (1)
    {
        printf("Please choose any number to do operations\n");
        printf("1.For Push\n");
        printf("2.For Pop\n");
        printf("3.For Peek\n");
        printf("4.For chechk the stack is Empty or not\n");
        printf("4.For chechk the stack is Full or not\n");
        printf("5.Stack Size\n");
        printf("6.Exit\n");
        printf("Please choose any number from above\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("Enter data to pushed in stack\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            if (data == -1)
            {
                printf("Stack is Empty\n");
            }
            else
                printf("Succesfully deleted. Element is %d", data);
            break;
        case 3:
            peek();
            break;
        case 4:
            if (isEmpty)
                printf("stack is Empty\n");
            else
                printf("Stack is not Empty");
            break;
        case 5:
            if (isFull)
                printf("stack is Full\n");
            else
                printf("Stack is not Full");
            break;
        case 6:
            exit(1);
        default:
            printf("Wrong input");
            break;
        }
    }
}