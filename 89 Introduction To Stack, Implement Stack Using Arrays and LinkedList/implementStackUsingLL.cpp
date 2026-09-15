#include<iostream>
using namespace std;

//implement stack with LL

class node{
    public:
    int data;
    node *next;

    node(int value) {
        data=value;
        next=NULL;
    }
};

class stack
{
    node *top;
    int count;      //to track size of stack

    public:
    stack() {
        top = NULL;
        count = 0;
    }

    //push
    void push(int value) {
        node *temp = new node(value);
        if(temp==NULL) //jab stack overflow ho jayega then it return NULL
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        else {
        temp->next = top;
        top=temp;
        count++;
        cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
    }

    //pop
    void pop() {
        if(top==NULL) {
            cout<<"stack underflow";
            return ;
        }else {
            node *temp=top;
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            top=top->next;
            delete temp;
            count--;
        }
    }

    //peak
    int peak() {
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else {
            return top->data;
        }
    }

    //isEmpty
    bool isEmpty() {
        return top == NULL;
    }

    //isSize
    int size() {
        return count;
    }
};

int main()
{
    stack s;
    s.push(6);
    s.push(8);
    s.push(12);
    s.push(23);

    s.pop();

    cout<<s.size()<<endl;
    cout<<s.peak()<<endl;
    cout<<s.isEmpty()<<endl; //0 matlab empty nhi hai
}
