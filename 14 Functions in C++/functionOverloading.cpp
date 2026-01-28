#include<iostream>
using namespace std;

void Swap(int &n, int &m){  // same naam ke function possible hai
    int temp;               // parameters different hone chahiye
    temp = n;
    n = m;
    m = temp;
}

void Swap(float &p, float &q) // Function overloading
{
    float z = p;
    p = q;
    q = z;
}

int main(){
    int a=4, b=5;
    Swap(a, b);
    cout<<a<<" "<<b<<endl;

    float p=2.5, q=3.5;
    Swap(p, q);
    cout<<p<<" "<<q;
}