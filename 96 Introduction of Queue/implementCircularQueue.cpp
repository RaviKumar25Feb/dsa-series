#include<iostream>
using namespace std;

class queue{
    int *arr;
    int front, rear, size;

    public:
    queue(int n) {
        arr = new int(n);
        size = n;
        front = rear = -1;
    }

    //If queue is empty or not
    bool IsEmtpy() {
        return front == -1;
    }

    //If queue is full
    bool IsFull() {
        return (rear+1)%size == front;
    }

    //push element to queue
    void push(int x) {
        cout<<"Pushed "<<x<<" into the Queue"<<endl;
        //empty
        if(IsEmtpy()){
            front = rear = 0;
            arr[0] = x;
            return;
        }
        //full
        else if(IsFull()) {
            cout<<"Queue is overflow"<<endl;
            return;
        }
        //simple insert
        else {
            rear = (rear + 1)%size;
            arr[rear] = x;
            return;
        }
    }

    //pop element
    void pop() {
        //empty
        if(IsEmtpy()){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        //normal
        else{
            cout<<"Popped "<<arr[front]<<" from the queue"<<endl;
            if(front == rear){
                front = rear = -1;
            }else {
                front = (front+1)%size;
            }
        }
    }

    //starting of queue
    int start() {
        //empty
        if(IsEmtpy()){
            cout<<"Queue is emtpy"<<endl;
            return -1;
        }else {
            return arr[front];
        }
    }
};

int main()
{
    queue q(5);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);
    
    q.pop();
    q.pop();
    q.pop();

    q.push(55);

    cout<<"Starting element: "<<q.start()<<endl;
}