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

Node* CreateLinkedList(int arr[], int index, int size)
{
    //Base case
    if(index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);

    return temp;
}


int main() 
{
    Node *Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    Head = CreateLinkedList(arr, 0, 5);

    //print the value
    Node *temp = Head;
    while(temp == NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}