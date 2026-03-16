#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node (int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;

    // create first node
    Node* n1 = new Node(2);
    Head = n1;
    Tail = n1;
    //create second node
    Node* n2 = new Node(4);
    Tail->next = n2;
    Tail = n2;
    //create third node
    Node* n3 = new Node(6);
    Tail->next = n3;
    Tail = n3;

    //printing the nodes
    Node* temp = Head;
    cout<<"Total Node: ";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // print the new line
    cout<<endl;

    // now deleting node from end
    //first check kya only one node to nhi hai
    if(Head == Tail)
    {
        delete Head;
        Head = Tail = NULL;
        return 0;
    }

    Node* secondTemp = Tail;
    temp = Head;
    while(temp->next != Tail)
    {
        temp = temp->next;
    }

    Tail = temp;
    Tail->next = NULL;
    delete secondTemp;

    //printing the node
    temp = Head;
    cout<<"Current Nodes: ";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}