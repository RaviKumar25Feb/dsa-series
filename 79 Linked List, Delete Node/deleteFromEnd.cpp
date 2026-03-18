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
    
    if(Head!=NULL)
    {
        //only one node is present
        if(Head->next == NULL)
        {
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }
        //more than one node is present
        else {
            Node *curr = Head;
            Node *prev = NULL;

            //curr->next is not null
            while(curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
        }
    }
    

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