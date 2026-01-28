
// // 1st method using nested loops T.C. -> O(n^2)
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array: "<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the elements of the array: "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter the target value: ";
//     cin>>target;
//     for(int start=0; start<n-1; start++){
//         for(int end=start+1; end<n; end++){
//             if(arr[start]+arr[end]==target){
//                 cout<<"Yes present.";
//                 return 0;
//             }
//         }
//     }
//     cout<<"Not present.";
//     return 0;
// }



// // 2nd method is using binary search inside outer loop T.C. -> O(NlogN)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array: "<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the elements of the array: "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter the target value: ";
//     cin>>target;
//     for(int i=0; i<n-1; i++){
//         int x = target - arr[i];
//         int start = i + 1;
//         int end = n-1;
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(arr[mid] == x){
//                 cout<<"Yes persent.";
//                 return 0;
//             }
//             else if(arr[mid] < x){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     cout<<"Not present.";
//     return 0;
// }



// 3rd approch is Two pointer T.C. = O(n)
#include<iostream>
#include<vector>
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
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    int start=0, end=n-1, sum=0;
    while(start<end){
        if(arr[start]+arr[end] == target){
            cout<<"Yes present.";
            return 0;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"Not present.";
    return 0;
}