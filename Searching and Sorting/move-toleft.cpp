#include<iostream>
using namespace std;
//TC - O(N)
//SC - O(1)
//Dutch National Flag algorithm: 
void moveNegativetoLeft(int arr[], int n){
    int l = 0;
    int h = n - 1;
    while(l < h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h] > 0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }
}
int main()
{
    int arr[] = {1,-3,2,-5,7,0};
    int n = sizeof(arr)/sizeof(int);
    moveNegativetoLeft(arr, n);
    for(int i = 0; i < n; i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}