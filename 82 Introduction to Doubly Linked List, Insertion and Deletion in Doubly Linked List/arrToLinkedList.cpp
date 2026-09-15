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