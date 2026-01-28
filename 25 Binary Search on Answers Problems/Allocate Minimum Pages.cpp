#include<iostream>
using namespace std;

int main() {

    int arr[5]={23, 56, 73, 100, 150};

    int N = 5, M=3;
    
    if(M>N)
    return -1;
    
    int start=0, end=0, mid, ans;
    for(int i=0; i<N;i++){
        start=max(start, arr[i]);
        end=end+arr[i];
    }
    
    while(start<=end){
        mid=start+(end-start)/2;
        
        int pages=0, count=1;
        for(int i=0; i<N; i++){
            pages=pages+arr[i];
            if(pages>mid){
                count++;
                pages=arr[i];
            }
        }
        if(count<=M){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}