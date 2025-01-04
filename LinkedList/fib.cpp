#include<iostream>
using namespace std;

int fibb(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans = fibb(n - 1) + fibb(n - 2);
    return ans;
}
int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<fibb(i)<<" ";
    }
    
    return 0;
}
