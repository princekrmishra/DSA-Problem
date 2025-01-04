#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    //is empty
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    //size
    cout<<"size of stack is : "<<st.size()<<endl;
    
    //peek - top
    cout<<"Top element is: "<<st.top()<<endl;

    //pop
    st.pop();
    cout<<"Top element after deletion is: "<<st.top()<<endl;

    //size after deletion
    cout<<"size of stack after deletion is : "<<st.size()<<endl;


    //deletion

    return 0;
}