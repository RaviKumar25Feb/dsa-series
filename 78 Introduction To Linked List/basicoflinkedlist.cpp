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
    Node *n1 = new Node(3);
    head = n1;
    tail = n1;

    //create second node
    Node *n2 = new Node(4);
    tail->next = n2;
    tail = n2;

    //create third node
    Node *n3 = new Node(6);
    tail->next = n3;
    tail = n3;

    //print all the nodes
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<"["<<temp->data<<", "<<temp->next<<"]"<<" ";
        temp = temp->next;
    }

    return 0;
}