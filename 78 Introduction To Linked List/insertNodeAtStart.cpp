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
    }
};

int main()
{
    Node *Head = NULL;
    if(Head == NULL)
    {
        Head = new Node(4);
    }
    else {
        Node *temp;
        temp = new Node(4);
        temp -> next = Head;
        Head = temp;
    }

}