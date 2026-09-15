#include<iostream>
#include<stack>
using namespace std;

//stack internally -> deque ki help se implement hota hai

int main()
{
    stack<int>s;

    cout<<s.size()<<endl;
    s.push(5);
    cout<<s.size()<<endl;
    s.push(4);
    s.push(40);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;


    // s.push(6);
    // s.push(2);
    // s.push(32);
    // s.push(10);

    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // cout<<s.empty()<<endl;
}