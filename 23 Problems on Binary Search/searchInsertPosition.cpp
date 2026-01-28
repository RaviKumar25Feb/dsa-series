#include<iostream>
using namespace std;
int main(){
    int arr[1000], size;
    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"Enter the elements of array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key you wanna insert in array: ";
    cin>>key;

    int start=0, end=size-1, mid, position=size;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            position=mid;
            break;
        }
        else if(arr[mid]>key)
        {
            position=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
    }

    cout<<"Insert positon of element is : "<<position;

    return 0;
}