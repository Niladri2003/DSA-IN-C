#include <stdio.h>
#define max 4
int front = -1;
int rear = -1;
int queue[max];

void enque()
{
    int data;
    if (rear == max - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }

        printf("enter the element to be inserted\n");
        scanf("%d", &data);

        queue[rear] = data;
        rear++;
    }
}
void deque()
{
    if (front == -1 || front > rear)
    {
        printf(" underflow\n");
        return;
    }
    else
    {
        printf("deleted element is %d\n", queue[front]);
        front++;
    }
}
void getfront()
{
    if (front == -1)
        printf("Queue is empty");
    printf("Front element is => %d\n", queue[front]);
}
void getrear()
{
    if (rear == -1)
        printf("Queue is empty");
    printf("rear element is => %d\n", queue[rear]);
}
void print()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    int temp = 0;
    for (; temp <= rear; temp++)
    {
        printf("%d\n", queue[temp]);
    }
}
int main()
{
    enque();
    print("%d\n", front);
    enque();
    enque();
    enque();
    enque();
    print();
    deque();

    // getfront();
    // deque();
    // getfront();

    printf("\nHello");
    return 0;
}