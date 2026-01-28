#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter decimal number: ";
    cin>>num;

    int rem, ans=0, mul=1;
    while(num>0)
    {
        // reminder
        rem = num%2;

        // quotient
        num = num/2;

        // ans
        ans = rem * mul + ans;

        // mul
        mul = mul*10;
    }

    cout<<"Binary is : "<<ans;

    return 0;
}