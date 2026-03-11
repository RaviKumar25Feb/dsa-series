#include<iostream>
using namespace std;

class Node
{
    public:
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
    // //Static way to create node
    // Node A1(4);
    // A1.data = 4;
    // A1.next = NULL;
    // cout<<A1.data<<endl;
    // cout<<A1.next<<endl;

    // //Dynamic way to create node
    Node *Head;
    Head = new Node(4);
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;
}