#include<iostream>
using namespace std;

int main() {

    int arr[5]={23, 56, 73, 100, 150};
    int k = 2, d=3;

    int n = 5;
    // maximum ship weight
    int max = INT32_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    // total weight of ships
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    
    // find the minimum weight
    int start = max, end = sum, mid, ans=0;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        
        int pages=0, count=1;
        for(int i=0; i<n; i++)
        {
            pages += arr[i];
            
            if(pages > mid)
            {
                count = count + 1;
                pages = arr[i];
            }
        }
        
        if(count <= d)
        {
            end = mid - 1;
            ans = mid;
        }
        else{
            start = mid + 1;
        }
    }
    
    return ans;
}