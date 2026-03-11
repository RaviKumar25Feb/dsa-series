#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    //create first node
    Node *n1 = new Node(5);
    head = n1;
    tail = n1;

    //create second node and insert at the end
    Node *n2 = new Node(10);
    tail->next = n2;
    tail = n2;

    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp=temp->next;
    }
    cout << "NULL" <<endl;
}