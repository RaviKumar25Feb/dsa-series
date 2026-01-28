// //1st method using nested loops T.C. -> O(N^2)
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
//     int diff;
//     cout<<"Enter the diff value: ";
//     cin>>diff;
//     for(int i=0; i<n-1; i++){
//         int x = diff + arr[i];
//         for(int j=i+1; j<n; j++){
//             if(arr[j]==x){
//                 cout<<"Yes persent.";
//                 return 0;
//             }
//         }
//     }
//     cout<<"Not present.";
//     return 0;
// }


// // 2st method using binary search inside outer loop T.C. -> O(NlogN)
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
//     int diff;
//     cout<<"Enter the diff value: ";
//     cin>>diff;
//     for(int i=0; i<n-1; i++){
//         int start = i + 1;
//         int end = n - 1;
//         int x = diff + arr[i];
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(arr[mid] == x){
//                 cout<<"Yes persent.";
//                 return 0;
//             }
//             else if(arr[mid]<x){
//                 start = mid+1;
//             }
//             else{
//                 end =mid-1;
//             }
//         }
//     }
//     cout<<"Not present.";
//     return 0;
// }



// 3rd method is using Two pointer approch T.C. -> O(n)
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
    int diff;
    cout<<"Enter the diff value: ";
    cin>>diff;

    int start=0, end=1;
    while(end<n){
        if(arr[end]-arr[start]==diff){
            cout<<"Yes persent";
            return 0;
        }
        else if(arr[end]-arr[start]<diff){
            end++;
        }
        else{
            start++;
        }
    }
    cout<<"Not present.";
    return 0;
}