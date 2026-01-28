#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mul;
    cout<<"Enter the mul value: ";
    cin>>mul;

    sort(arr.begin(), arr.end());

    int start=0, end=n-1;
    while(start<end){
        if(arr[start]*arr[end]==mul){
            cout<<"Yes persent.";
            return 0;
        }
        else if(arr[start]*arr[end]<mul){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"Not present.";
    return 0;
}