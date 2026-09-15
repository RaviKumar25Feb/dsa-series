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

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    node *head = NULL;
    node *tail = head;
    // loop over arr
    for (int i = 0; i < 5; i++)
    {
        // when linked list is not present
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        // when linked list is present
        else
        {
            node *temp = new node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    tail->next = NULL;

    // insert at given postion
    int pos = 0;

    // insert at start
    if (pos == 0)
    {
        // linked list exist na kare
        if (head == NULL)
        {
            head = new node(5);
        }
        // exist kare
        else
        {
            node *temp = new node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        node *curr = head;
        // reach required node first
        while (--pos)
        {
            curr = curr->next;
        };
        // insert at end
        if (curr->next == NULL) // last node hai
        {
            node *temp = new node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // insert at middle
        else
        {
            node *temp = new node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    // print nodes
    node *temp = head;
    while (temp)
    {
        cout << temp->data;
        if (temp->next)
            cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}