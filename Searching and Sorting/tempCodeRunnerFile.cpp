#include<iostream>
using namespace std;
int findPivotIndex(int arr[], int n){
    int lsum[6];
    int rsum[6];
    for(int i = 1; i < n; ++i){
        lsum[i] = lsum[i-1]+arr[i-1];
    }
    for(int i = n -2; i>=0; --i){
        rsum[i] = rsum[i+1]+arr[i+1];
    }
    for(int i = 0; i<n; ++i){
        if(lsum[i]==rsum[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[6]= {1,7,3,6,5,6};
    int n = 6;
    int ans = findPivotIndex(arr, n);
    
    if(ans == -1){
        cout<<"Error occured"<<endl;
    }
    else{
        cout<<"The pivot index is at: "<<ans<<endl;
    }
    return 0;

}