#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    //for insertion
    void push(int data){
        if(top == size -1){
            cout<<"Stack OverFlow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=data;
        }
    }

    //for deletion
    void pop(){
        if(top == -1){
            cout<<"Stack UnderFlow"<<endl;
            return;
        }
        else{
            top--;
        }
    }

    //isEMpty
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    //Top ELement - PEEK
    int getTop(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            return arr[top];
        }
    }
    //Size
    int getSize(){
        return top+1;
    }

    void printStack(){
        cout<<"Top: "<<top<<endl;
        cout<<"Top Element: "<<getTop()<<endl;
        cout<<"Stack: ";
        for(int i = 0; i < getSize(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
};
int main() {
    Stack st(5);

    st.push(10);
    st.printStack();

    st.push(20);
    st.printStack();
    
    st.push(30);
    st.printStack();

    st.push(40);
    st.printStack();

    st.push(50);
    st.printStack();

    //overflow
    st.push(60);
    st.printStack();

    cout<<"Top Element : "<<st.getTop()<<endl<<endl;
    cout<<"Size of Stack: "<<st.getSize()<<endl<<endl;

    //pop
    st.pop();
    st.printStack();

    st.pop();
    st.printStack();

    st.pop();
    st.printStack();

    st.pop();
    st.printStack();
    //underflow
    st.pop();
    st.printStack();

    //empty
    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty "<<endl;
    }

    return 0;
}