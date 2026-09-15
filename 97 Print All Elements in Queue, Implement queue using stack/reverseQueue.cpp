#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    queue<int>q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(3);
    q.push(1);

    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}