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
    cout<<"Enter key you wanna find total occurance: ";
    cin>>key;
    
    // First occurance of an element
    int start=0, end=size-1, mid, firstOccur=-1, lastOccur=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            firstOccur=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
    }

    // Last occurance of an element
    start=0, end=size-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            lastOccur=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
    }

    cout<<"Total occurance of "<<key<<" is : "<<lastOccur-firstOccur+1;

    return 0;
}