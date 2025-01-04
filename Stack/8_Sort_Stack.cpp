#include<iostream>
#include<stack>
using namespace std;

void InsertSorted(stack<int> &st, int &element){
    //base case
    if(st.empty() || element > st.top()){
        st.push(element);
        return;
    }
    //1 case
    int temp = st.top();
    st.pop();
    //recursive call
    InsertSorted(st, element);
    //backtracking
    st.push(temp);
}

void sortStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();
    //recursive call
    sortStack(st);

    //backtracking
    InsertSorted(st, temp);
}
int main() {
    stack<int>st;
    st.push(10);
    st.push(5);
    st.push(6);
    st.push(1);
    st.push(35);
    st.push(31);
    st.push(8);
    st.push(3);
    
    sortStack(st);

    cout<<"Printing the sorted Array: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

    return 0;
}