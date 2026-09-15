#include<iostream>
using namespace std;

//implement stack with array
class stack {
    int *arr;
    int size;
    int top;

    public:
    //constructor
    stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
    }

    //PUSH
    void push(int value) {
        if(top == size-1){
            cout<<"Stack overflow";
            return;
        }else {
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into the stack\n";
        }
    }

    //POP
    void pop() {
        if(top == -1) {
            cout<<"Stack underflow"<<endl;
            return;
        }else {
            cout<<"Popped "<<arr[top]<<" from the stack"<<endl;
            top--;
        }
    }

    //PEAK
    int peak() {
        if(top == -1) {
            cout<<"Stack is empty"<<endl;
            return -1;
        }else {
            return arr[top];
        }
    }

    //isEmpty
    bool isEmpty() {
        if(top == -1) {
            return true;
        }else{
            return false;
        }
    }

    //isSize
    int isSize() {
        return top+1;
    }
};

int main()
{
    stack S(5);
    //push the elements
    S.push(5);
    S.push(6);
    S.push(8);

    // //pop the elements
    // S.pop();
    // S.pop();

    // // peak element
    // cout<<S.peak()<<endl;

    // //size of stack
    // cout<<S.isSize()<<endl;

    //isEmpty
    cout<<S.isEmpty()<<endl;
}