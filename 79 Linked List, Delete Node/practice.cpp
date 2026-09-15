#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *createLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp = new node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    node *head = NULL;
    head = createLinkedList(arr, 0, 5);

    // delete first node
    //  if(head!=NULL){
    //      node *temp=head;
    //      head=head->next;
    //      delete temp;
    //  }

    // delete from last
    //  node *temp2=head;
    //  node *prev=head;
    //  while(temp2->next!=NULL){
    //      prev=temp2;
    //      temp2=temp2->next;
    //  }
    //  prev->next=NULL;
    //  delete temp2;

    // if(head!=NULL){
    //     //only one node present
    //     if(head->next==NULL){
    //         node *temp=head;
    //         head=NULL;
    //         delete temp;
    //     }
    //     //node more than one
    //     else{
    //         node *curr = head;
    //         node *prev = NULL;

    //         while(curr->next!=NULL){
    //             prev=curr;
    //             curr=curr->next;
    //         }
    //         prev->next=NULL;
    //         delete curr;
    //     }
    // }

    // delete nth node
    int k = 4;
    if (k <= 5)
    {
        node *prev = NULL;
        node *curr = head;
        while (--k)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    // print linked list
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}