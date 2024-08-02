//Optimal Code:
//TC - O(n)
//SC - O(1)

#include<iostream>
using namespace std;

void pivotIndex(int arr[], int n){
    int lsum[3]={};
    int rsum[3]={};
    for(int i = 1; i<n; i++){
        lsum[i]=lsum[i-1]+arr[i-1];
    }
    for(int i = n - 2; i>=0; i--){
        rsum[i] = rsum[i+1]+arr[i+1];
    }
    for(int i = 0; i<n; i++){
        if(lsum[i]==rsum[i]){
            cout<<"The pivot index is present at: "<<i<<endl;
        }
        else{
            continue;
            cout<<"Not Found";
        }
    }
}
int main(){
    int arr[3] = {2,1,-1};
    int n = 3;
    pivotIndex(arr, n);
    return 0;
}

//Brute Force
//TC - O(n^2)
//SC - O(1)

// void pivotIndex(int arr[], int n){
// for(int i = 0; i<n; i++){
//     int lsum = 0;
//     int rsum = 0;
//     for(int j = 0; j < i; j++){
//         lsum +=arr[j];
//     }
//     for(int j = i+1; j<n; j++){
//         rsum +=arr[j];
//     }
//     if(lsum==rsum){
//         cout<<"The pivot index is present at : "<<i<<endl;
//     }
//     else if(lsum != rsum){
//         continue;
//     }       
// }
// cout<<"Not found"<<endl;
// }
// int main(){
//     int arr[3] = {1,2,3};
//     int n = 3;
//     pivotIndex(arr, n);
// return 0;
// }