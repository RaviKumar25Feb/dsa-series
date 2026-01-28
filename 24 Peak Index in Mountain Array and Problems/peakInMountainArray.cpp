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

    int start=0, end=size-1, mid;
    while(start<=end){
        mid=end+(start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}