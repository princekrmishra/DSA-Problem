#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>&st, int &pos, int &ans){
    //base case
    if(pos == 1){
        cout<<"Deleting Node: "<<st.top()<<endl;
        st.pop();
        return;
    }
    //1 case - recursion
    pos--;
    int temp = st.top();
    st.pop();
    solve(st, pos, ans);
    st.push(temp);
}

int DeleteMid(stack<int>&st){
    int size = st.size();

    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else{
        //stack not empty
        //odd case
        int pos = 0;
        pos = size/2+1;
        int ans = 1;
        solve(st, pos, ans);
        return ans;
    }
}

int main() {

    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);

    cout<<"before deletion"<<endl;
    cout<<"Size"<<st.size()<<endl;

    /*printStack(st);*/

    int ans = DeleteMid(st);
    cout<<"After deletion"<<endl;
    cout<<"Size"<<st.size()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    /*printStack(st);*/

    return 0;
}