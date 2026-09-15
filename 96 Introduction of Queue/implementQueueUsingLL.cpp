#include<iostream>
using namespace std;

//Queue using LL
class node{
    public:
    int data;
    node *next;
    node (int value){
        data=value;
        next=NULL;
    }
};

class queue{
    node *front;
    node *rear;
    public:

    queue(){
        front=rear=NULL;
    }

    //queue is empty or not
    bool IsEmpty() {
        return front == NULL;
    }

    //push
    void push(int x) {
        //queue is empty
        cout<<"Pushed "<<x<<" into the queue"<<endl;
        if(IsEmpty()){
            front = rear = new node(x);
            return;
        }
        else {
            rear->next = new node(x);
            rear = rear->next;
        }
    }

    //pop
    void pop() {
        //empty to nhi hai
        if(IsEmpty()){
            cout<<"Queue under flow"<<endl;
            return;
        }else {
            cout<<"Popped "<<front->data<<" from the queue"<<endl;
            node *temp = front;
            front=front->next;
            delete temp;
        }
    }

    //start
    int start() {
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return front->data;
        }
    }
};

int main() {
    queue q;

    q.push(5);
    q.push(4);
    q.push(6);
    q.push(7);

    q.pop();
    q.pop();
    q.pop();

    cout<<"Starting Ele: "<<q.start()<<endl;
}