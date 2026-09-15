#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

node* createDLL(int arr[], int index, int size, node* back){
    if(index==size)
        return NULL;

    //create node
    node* temp=new node(arr[index]);
    temp->prev=back;
    temp->next=createDLL(arr, index+1, size, temp);
    return temp;
}

int main(){
    int arr[]={2,3,4,5,6};
    node* head=NULL;
    node* tail=NULL;

    // Create it with recursion
    head = createDLL(arr, 0, 5, NULL);

    //print the linked list
    node* trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    return 0;
}