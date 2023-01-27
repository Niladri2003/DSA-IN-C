// Write a menu driven program in C or C++ to implement a queue using single
// linked list and perform the following operations.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front