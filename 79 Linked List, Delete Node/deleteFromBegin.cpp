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
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // now deleting node from begin
    if(Head == NULL)
    {
        cout<<"Linked List is empty.";
        return 0;
    }

    Node* secondTemp = Head;
    Head = Head->next;
    delete secondTemp;

    //print new line
    cout<<endl;

    //check delete hua ya nhi
    temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}