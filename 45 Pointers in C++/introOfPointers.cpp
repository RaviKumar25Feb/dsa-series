#include<iostream>
using namespace std;
int main() {
    // int a = 5;
    //print the address of a
    // cout<< & a << endl;

    // another way to store address
    // int a = 5;
    // int *ptr = &a;
    // cout<< ptr << endl;

    // float m = 2.6;
    // float *ptr1 = &m;
    // cout<< ptr1 <<endl;

    // char b = 'c';
    // char *ptr2 = &b;
    // cout<< ptr2 <<endl;

    // //size of ptr
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(ptr1)<<endl;
    // cout<<sizeof(ptr2)<<endl;

    // int a = 10;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // int b = 20;
    // ptr=&b;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    //print ptr without any address
    int *P; //it is bad practice it has garbage value
    cout<<P<<endl;
    P=nullptr; //it is good practice to have null address
    cout<<P<<endl;

    return 0;
}