#include <iostream>
#include <vector>
using namespace std;

// create node
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

// create list
ListNode *createLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    ListNode *temp = new ListNode(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
}

// main function
int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    ListNode *head = NULL;

    // create linked list
    head = createLinkedList(arr, 0, 5);

    // reverse the LL using recursive method
    ListNode *prev = NULL, *curr = head, *fut = curr;
    while (curr)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    head = prev;

    // print linked list
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}