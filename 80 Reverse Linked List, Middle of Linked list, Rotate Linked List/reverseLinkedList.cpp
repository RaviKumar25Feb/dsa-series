#include<iostream>
#include<vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data){
        val = data;
        next = NULL;
    }
};

ListNode *createLinkedList(int arr[], int index, int size) {
    if(index==size){
        return NULL;
    }
    ListNode *temp = new ListNode(arr[index]);
    temp->next = createLinkedList(arr, index+1, size);
    return temp;
}

int main()
{
    int arr[] = {3,4,5,6,7};
    ListNode *head = NULL;

    //create linked list
    head = createLinkedList(arr, 0, 5);

    vector<int>ans;
    ListNode* temp=head;
    while(temp){
        ans.push_back(temp->val);
        temp=temp->next;
    }

    int i=ans.size()-1;
    temp=head;
    while(temp){
        temp->val=ans[i];
        i--;
        temp=temp->next;
    }
    
    //print linked list
    temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    return 0;
}