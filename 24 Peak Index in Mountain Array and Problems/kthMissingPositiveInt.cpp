#include<iostream>
using namespace std;

int main() {
    int arr[6]={2,3,4,7,11,12};
    int k = 4;
    int start=0, end=5, mid, ans=6;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans+k;
}