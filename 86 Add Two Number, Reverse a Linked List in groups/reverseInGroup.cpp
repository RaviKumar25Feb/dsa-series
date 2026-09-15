#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *createLL(int arr[], int size, int index)
{
    if (size == index)
    {
        return NULL;
    }

    node *temp = new node(arr[index]);
    temp->next = createLL(arr, size, index + 1);
    return temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    node *head;
    head = createLL(arr, 8, 0);
    int k = 3;

    // code here
    node *temp = new node(0);
    temp->next = head;
    head = temp;
    node *first = temp, *second = first->next;
    node *curr, *prev, *fut;

    // length of LL
    int count = 0;
    node *trav = head->next;
    while (trav)
    {
        count++;
        trav = trav->next;
    }

    int rounds = count / k;

    while (rounds)
    {
        curr = first->next, prev = first;
        int cn = k;
        while (cn)
        {
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
            cn--;
        }
        first->next = prev;
        second->next = curr;
        first = second;
        second = curr;

        rounds--;
    }

    head = head->next;
    delete temp;

    node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    return 0;
}