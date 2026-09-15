#include<iostream>
using namespace std;

void fun(int n) {
    if(n==0){
        cout<<"Happy Birthday!"<<endl;
        return;
    }

    if(n==1){
        cout<<n<<" day left for birthday"<<endl;
    }else{
        cout<<n<<" days left for birthday"<<endl;
    }

    fun(n-1);
}

int main()
{
    fun(10);
    return 0;
}