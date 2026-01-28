#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter binary numbers: ";
    cin>>num;

    // first -> convert binary into decimal
    int rem, ans=0, mul=1;
    while(num>0)
    {
        // rem
        rem = num % 10;

        // num update
        num = num / 10;

        // ans
        ans =rem * mul + ans;

        // mul update
        mul = mul * 2;
    }

    // second -> convert decimal into octal
    double rem1, ans1=0, mul1=1; 
    while(ans>0)
    {
        // rem
        rem1 = ans % 8;

        // num
        ans = ans/8;

        // result
        ans1=rem1*mul1+ans1;

        // mul1
        mul1 = mul1*10;
    }
    cout<<"Octal number is : "<<ans1;

    return 0;
}