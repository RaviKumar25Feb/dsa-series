#include<iostream>
using namespace std;
int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // //print the address of first element
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // print the address of second element
    cout<<arr<<endl;

    // //print first element
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0);

    // //all address
    // for(int i=0; i<5; i++){
    //     cout<<arr+i<<endl;
    // }

    // for(int i=0; i<5; i++) {
    //     cout<<*(arr + i)<<endl;
    // }

    // //print array value using ptr
    // for(int i=0; i<5; i++) {
    //     cout<<ptr[i]<<" ";
    // }

    // //print all the address
    // for(int i=0; i<5; i++) {
    //     cout<<ptr+i<<endl;
    // }

    // //arithmetic operations ptr++, ptr--
    // for(int i=0; i<5; i++) {
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }

    // //value in reverse order using ptr--
    // ptr = ptr + 4;
    // for(int i=4; i>=0; i--) {
    //     cout<<*ptr<<endl;
    //     ptr--;
    // }
}
