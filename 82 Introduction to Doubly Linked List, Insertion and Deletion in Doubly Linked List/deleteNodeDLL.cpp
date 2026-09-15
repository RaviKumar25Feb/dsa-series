#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

node *createDLL(int arr[], int index, int size, node *back)
{
    if (index == size)
        return NULL;

    // create node
    node *temp = new node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    node *head = NULL;
    node *tail = NULL;

    // Create it with recursion
    head = createDLL(arr, 0, 5, NULL);

    // //delete first node
    // if(head->next==NULL){
    //     delete head;
    //     head=NULL;
    // }else{
    //     node* temp=head;
    //     head=head->next;
    //     delete temp;
    //     head->prev=NULL;
    // }

    // // delete last node
    // if (head)
    // {
    //     if (head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     else
    //     {
    //         node *curr = head;
    //         while (curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }

    // delete at given pos node
    int pos = 4;
    // delete at start
    if (pos == 1)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }
    else
    {
        node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }
        // delete at end
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        // delete at mid
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }

    //  print the linked list
    node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    return 0;
}
