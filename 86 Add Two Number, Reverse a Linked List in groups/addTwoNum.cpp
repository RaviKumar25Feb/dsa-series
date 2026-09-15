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
    head = createLinkedList(arr, 0, 5);

    //code here
    
}