#include<iostream>
using namespace std;

void Swap(int &n, int &m){
    int temp;
    temp = n;
    n = m;
    m = temp;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    Swap(a, b);
    cout<<a<<b;
}