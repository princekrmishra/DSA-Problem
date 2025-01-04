#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>&st, int &pos, int &ans){
    //base case
    if(pos == 1){
        ans = st.top();
        return;
    }
    else{
        //1 case - recursion wla
        pos--;
        int temp = st.top();
        st.pop();

        //recursive call
        solve(st, pos, ans);

        //backtracing
        st.push(temp);
    }
}

int getMidElement(stack<int> &st){
    int size = st.size();
    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else{
        //stack not empty
        //odd case
        int pos = 0;
        if(size & 1){
            pos = size/2+1;
        }
        //even
        else{
            pos = size/2;
        }
        int ans = 1;
        solve(st, pos, ans);
        return ans;
    }
}
int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int mid = getMidElement(st);
    cout << "Middle element is " << mid<<endl;
    return 0;
}