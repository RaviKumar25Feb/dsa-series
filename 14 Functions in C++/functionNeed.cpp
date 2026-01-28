#include<iostream>
using namespace std;

// Function to find Prime or not
bool Prime(int n){
    if (n<2)
    {
        return 0;
    }
    for(int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

// Function to find Factorial
int Fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

// Main Function
int main()
{
    int a, b;
    cout<<"Enter value of 'a' : ";
    cin>>a;
    cout<<"Enter value of 'b' : ";
    cin>>b;
    // A is prime or not
    cout<<Prime(a)<<endl;
    // A ka Factorial
    cout<<Fact(a)<<endl;
    // B is prime or not
    cout<<Prime(b)<<endl;
    // B ka Factorial
    cout<<Fact(b)<<endl;
    // B-A is Prime or not
    cout<<Prime(b-a)<<endl;
    // B-A ka Factorial
    cout<<Fact(b-a)<<endl;

    return 0;
}