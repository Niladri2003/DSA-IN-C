#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *ptr;
    Node(int x)
    {
        data = x;
        ptr = NULL;
    }
};
Node *head = NULL;
Node *tail = NULL;
void insertatbegin(Node *&head, int data, Node *&tail)
{
    Node *temp = new Node(data);

    temp->ptr = head;
    head = temp;
    tail = temp;
}
void insertatend(Node *&head, int x, Node *&tail)
{
    Node *temp = new Node(x);

    tail->ptr = temp;
    tail = temp;
}
void print(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data;
        cout << " ";
        ptr = ptr->ptr;
    }
}
int main()
{
    // int x, n;
    // cout << "press 0 to exit from program" << endl;
    // cout << "1. For insert at begin" << endl;
    // cin >> n;
    // while (n != 0)
    // {

    //     switch (n)
    //     {
    //     case 1:
    //         cout << "enter data" << endl;
    //         cin >> x;
    //         insertatbegin(head, x,tail);
    //         break;
    //     case 0:
    //         break;
    //     }
    //     cout << "press 0 to exit from program" << endl;
    //     cout << "1. For insert at begin" << endl;
    //     cin >> n;
    // }

    // insertatbegin(head, 30);
    insertatbegin(head, 50, tail);
    insertatend(head, 40, tail);
    insertatend(head, 30, tail);
    insertatend(head, 20, tail);
    insertatend(head, 10, tail);
    // cout << head->ptr;
    // cout << tail->ptr << endl;
    // cout << tail->data;

    print(head);
    cout << "hi";
    return 0;
}
