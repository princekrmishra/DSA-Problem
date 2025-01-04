#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>NextSmallerElement(int *arr, int size, vector<int>&ans){
    stack<int>st;
    st.push(-1);

    for(int i = size - 1; i >= 0; i++){
        int curr = arr[i];
        //ans find krna h curr k liye
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();

        st.push(curr);
    }
    return ans;
}

vector<int> PrevSmallerElement(int *arr, int size, vector<int>&ans){
    stack<int> st;
    st.push(-1);

    for(int i = 0; i <= size - 1; i++){
        int curr = arr[i];
        //ans find krna h curr k liye
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();

        st.push(curr);
    }
    return ans;
}
int main() {
    int arr[5] = {4, 8, 5, 2, 25};
    int size = 5;

    vector<int> prev(size);
    cout<<"prev: "<<endl;
    prev = PrevSmallerElement(arr, size, prev);
    for(auto i : prev){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}