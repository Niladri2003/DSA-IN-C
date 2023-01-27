#include <stdio.h>
#include <stdlib.h>
#define size 100
int queue[size];
void enque(int);
void dequeue();
void display();
int rear = -1;
int front = -1;
int main()
{

    display();
    enque(10);
    enque(12);
    enque(13);
    enque(14);
    display();
    dequeue();
    display();

    return 0;
}
void enque(int a)
{
    if (rear == size - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = a;
        printf("\nInserted element is -> %d\n", a);
    }
}
void dequeue()
{
    int temp;
    if (rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        temp = queue[front];
        front++;
        printf("\nInserted element is -> %d\n", temp);
        if (front > rear)
            front = rear = -1;
    }
}
void display()
{
    if (rear == -1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        int i;
        printf("\nQueue elements is->\n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}