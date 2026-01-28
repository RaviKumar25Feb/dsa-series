#include<iostream>
using namespace std;

int main() {

    int arr[5]={23, 56, 73, 100, 150};
    int k = 2;
    // size of the arr
    int n = 5;
    
    //sum of the array elements
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    
    // maximum element in the array
    int max=INT32_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    // find the minimum time to work done
    int start = max, end = sum, mid, ans=0;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        
        int pages=0, count=1;
        for(int i=0; i<n; i++)
        {
            pages += arr[i];
            
            if(pages>mid)
            {
                count++;
                pages = arr[i];
            }
        }
        
        if(count<=k)
        {
            end = mid - 1;
            ans = mid;
        }
        else{
            start = mid + 1;
        }
    }
    
    // return minimum time
    return ans;
}