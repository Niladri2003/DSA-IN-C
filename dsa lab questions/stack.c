#include <stdio.h>
#include <stdlib.h>
int maxsize = 8;
int stack[8];
int top = -1;
void pop()
{
    if (top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else
    {
        int x = stack[top];
        printf("Popping %d out of the stack\n", x);
        top -= 1;
    }
}
// Display Stack
void display()
{
    if (top != -1)
    {
        for (int i = 0; i < maxsize; i++)
        {
            printf(" %d ", stack[i]);
        }
    }
    else
    {
        printf("Stack is EMpty");
    }
}
// Empty Function
int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
        return 0;
}
// Full Function

int isFull()
{
    if (top == maxsize)
        return 1;
    else
        return 0;
}
// Push function
int push(int data)
{
    if (!isFull())
    {
        top++;
        stack[top] = data;
    }
    else
        printf("stack is Full\n");
}
// Pop Function

int main()
{
    printf("Enter data int the stack\n");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    display();
    pop();
    // pop();
    display();
}