#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //How to create queue
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.pop();
    q.pop();
    q.pop();

    //first element
    cout<<q.front()<<endl;

    //empty hai ya nhi
    cout<<q.empty()<<endl;

    //last ele
    cout<<q.back()<<endl;

    //queue ka size
    cout<<q.size()<<endl;
}