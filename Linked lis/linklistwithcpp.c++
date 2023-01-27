#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;

    tail = temp;
}
void print(Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;
    insertathead(head, 77);
    insertattail(tail, 22);
    print(head);

    cout << "Hello world" << endl;
    return 0;
}