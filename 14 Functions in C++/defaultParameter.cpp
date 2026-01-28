#include<iostream>
using namespace std;

int add(int a = 5, int b = 6)   // Default Parameters
{
    int sum = a + b;
    return sum;
}


int main()
{
    cout<<add();    // No arguments here
}