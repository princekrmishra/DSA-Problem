#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(rear == size - 1){
            cout<<"Overflow"<<endl;
            return;
        }

        else if(rear == -1 && front == -1){
            //not full
            front++;
            rear++;
            arr[rear] = val;
        }

        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
            return;
        }

        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        else{
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else{
            return rear - front + 1;
        } 
    }

    int getFront(){
        if(front == -1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(rear == -1){
            cout<<"Nothing in the queue: "<<endl;
            return -1;
        }
        else {
            if (rear == size - 1){
            return arr[rear];
        }
        }
    }
    void print(){
        cout<<"printing queue: "<<endl;
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Queue q(5);

    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    cout<<"size of queue: "<<q.getSize()<<endl;

    q.pop();
    q.print();
    q.getSize();

    cout<<"Queue is empty or not: "<<q.isEmpty()<<endl;

    cout<<"front: "<<q.getFront()<<endl;
    cout<<"rear: "<<q.getRear()<<endl;
    q.push(100);
    q.print();
    //yha insert nhi kr payega -- because queue aisa hi hota h 
    //yha circular queue m insert kr skte h

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.getFront();
    cout<<"Size is: "<<q.getSize()<<endl;
    return 0;
}