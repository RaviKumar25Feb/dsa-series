#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(3);
    q.push(1);

    // print these values
    int n = q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

    cout<<endl;

    //check ele abhi bhi present hai
    cout<<q.size()<<endl;
}