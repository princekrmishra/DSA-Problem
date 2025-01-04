#include<iostream>
using namespace std;

class CirQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    CirQueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
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

    void pop(){
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

    void print(){
        cout<<"Printing circular queue: "<<endl;
        for(int i = 0; i <size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main() {
    CirQueue q(5);
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

    q.push(60);
    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.print();

    q.push(60);
    q.print();

    q.push(70);
    q.print();

    q.push(356);
    q.print();

    q.push(6460);
    q.print();


    return 0;
}