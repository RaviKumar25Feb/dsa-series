#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter octal number : ";
    cin>>num;

// first convert octal to decimal
    int ans=0, rem, mul=1;
    while(num>0)
    {
        // rem
        rem = num % 10;
        
        // num
        num = num / 10;

        // ans
        ans = ans + rem * mul;

        // mul
        mul = mul * 8;
    }

// second convert decimal to binary
    int result=0, pro=1;
    while(ans>0)
    {
        // rem
        rem = ans % 2;

        // num
        ans = ans / 2;

        // result
        result = result + rem * pro;

        //pro
        pro = pro * 10;
    }
    cout<<"Binary is : "<<result<<endl;

    return 0;
}