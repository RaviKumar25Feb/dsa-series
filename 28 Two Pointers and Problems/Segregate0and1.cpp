// // 1st method using sorting the array -> T.C. = O(n^2)
// Selection sort
// Insertion sort
// Bubble sort



// // 2nd method is count 0 and 1 -> insert all the zero's first than 1's -> T.C. = O(nlogn)
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
//     int count0 = 0, count1 = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0){
//             count0 ++;
//         }
//         else{
//             count1++;
//         }
//     }
//     for(int i=0; i<count0; i++){
//         arr[i]=0;
//     }
//     for(int i=count0; i<n; i++){
//         arr[i]=1;
//     } 
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



//3rd method using two pointer approch -> T.C. = O(n)
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

    int start=0, end=n-1;
    while(start<end)
    {
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==0){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else{
            end--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}