#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter octal number: ";
    cin>>num;

    int ans=0, rem, mul=1;
    while(num>0)
    {
        // rem
        rem = num % 10;

        // num update
        num = num / 10;

        // ans
        ans =rem * mul + ans;

        // mul update
        mul = mul * 8;
    }
    cout<<"Decimal number is : "<<ans;

    return 0;
}