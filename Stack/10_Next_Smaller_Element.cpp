#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NextSmallerElement(int *arr, int size, vector<int>&ans){
    stack<int> st;
    st.push(-1);

    for(int i = size - 1; i >= 0; i--){
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
    vector<int>ans(size);

    ans = NextSmallerElement(arr, size, ans);
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}