#include<iostream>
#include<deque>

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushFront(int val){
    //underflow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front-1;
            rear=1;
        }
        else if(front == size -1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }   
    }

    void pushBack(int val){
        if((rear == front -1) || (front == 0 && rear == size -1)){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == size -1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void popBack(){
        //underflow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        //single
        else if(front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            arr[rear] = -1;
            rear = size -1;
        }
        //normal
        else{
            arr[rear] = -1;
            rear--;
        }

    }

    void popFront(){
        //underflow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front-1;
            rear=1;
        }
        else if(front == size -1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }   
    }
};
using namespace std;
int main() {
    Deque dq(5);

    
    return 0;
}