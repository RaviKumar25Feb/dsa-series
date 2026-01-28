#include<iostream>
using namespace std;

int z=5;    // global declaration can access anywhere

int add(int n, int m){
    int sum = n + m;
    return sum;
}

int mul(){
    //int mul = n * m;    // we can not access (n, m) here

    cout<<z;              // we can access here
}

int main(){
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<add(a, b);

    //cout<<n<<m;         // we can not access

    cout<<z;        // we can access here
}