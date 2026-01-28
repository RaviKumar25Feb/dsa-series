#include<iostream>
using namespace std;

int main() {
    int arr[8]={3,4,5,6,7,5,4,3};

    int start=0, end=7, mid=0;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"peak index"<<arr[mid]<<endl;
            return 0;
        }
        else if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}