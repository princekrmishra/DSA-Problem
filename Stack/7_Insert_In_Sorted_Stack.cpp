#include<iostream>
#include<stack>
using namespace std;

void InsertSorted(stack<int>&st, int element){
    /*glti no 1
    if(element > st.top()){

    }*/
   if(st.empty() || element > st.top()){
    st.push(element);
    return;
   }  

    //1 case
    int temp = st.top();
    st.pop();

    //recursion
    InsertSorted(st, element);
    
    //backtracing
    st.push(temp);

}
int main() {
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);

    InsertSorted(st, 20);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}