#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

int main() {
    node *head=NULL;

    // Insert at start
    //Linked list doesn't exist
    if(head==NULL){
        head = new node(5);
    }
    //Already exist
    else{
        node *temp=new node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

    //print the value
    node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}