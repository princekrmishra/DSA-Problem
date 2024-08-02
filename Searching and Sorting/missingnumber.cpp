//By XOR: 
//TC-O(N)
//SC-O(1)
#include<iostream>
#include<algorithm>
using namespace std;
int missingNumber(int arr[], int n){
   int ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }
   for(int i = 0; i<= n; i++){
        ans ^= i;
        }
        cout<<"Missing number is : "<<ans;
        return 0;                    
}
int main(){
    int arr[] ={1, 3, 0,2,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    missingNumber(arr, n);
    return 0;
}



//BY SORTING
//TC- O(nlogn)
//SC -O(1)

// int missingNumber(int arr[], int n){
//     // int ans = 0;
//     sort(arr, arr + n);

//     for(int i = 0; i<n; i++){
//         if(i == arr[i]){
//             continue;
//         }
//         else {
//             cout<<"missing element is "<<i;
//         }
//     }
//     return n;

