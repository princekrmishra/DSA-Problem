#include <iostream>
#define MAX 2
using namespace std;

class Stack{
    int top;
    int a[MAX];

public:
    
    Stack(){ 
        top = -1; 
        } 

    bool push(int x); 
    int pop();        
    bool isEmpty();   
    bool isFull();    
};

bool Stack::push(int x){
    if (isFull())
    {
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x<<" pushed into stack"<<endl;
        return true;
    }
}

int Stack::pop(){
    if (isEmpty())
    {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}

bool Stack::isFull(){
    return (top >= (MAX - 1));
}

int main(){
    Stack obj;
    obj.push(2);
    obj.push(4);
    obj.push(6);

    cout<<obj.pop()<<" popped from stack"<<endl;
    cout<<obj.pop()<<" popped from stack"<<endl;
    
    obj.pop();

    return 0;
}