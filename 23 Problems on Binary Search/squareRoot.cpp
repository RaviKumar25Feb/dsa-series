#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number to find square root : ";
    cin>>x;

    int start=1, end=x,mid, ans=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid==x/mid)
        {
            ans=mid;
            break;
        }
        else if(mid>x/mid)
        {
            end=mid-1;
        }
        else if(mid<x/mid)
        {
            ans=mid;
            start=mid+1;
        }
    }

    cout<<"Square root of "<<x<<" is : "<<ans;

    return 0;
}