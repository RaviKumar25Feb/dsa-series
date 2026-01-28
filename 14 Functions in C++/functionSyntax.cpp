#include<iostream>
using namespace std;


int Sum(int m, int n)   // Function declare
{
    int ans = m + n;    // Function define
    return ans;
}

int Mul(int n, int m) { // Function declare
    int ans = n * m;    // Function define
    return ans;
}

void fun(){                 // Function declare
    cout<<"Hello World";    // Function define
}

int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<Sum(a, b)<<endl;    // Function call

    cout<<Mul(a, b)<<endl;    // Function call

    int ans = Sum(a, b);      // Function call
    cout<<ans<<endl;

    fun();                    // Function call

    return 0;
}