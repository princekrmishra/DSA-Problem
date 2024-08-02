#include<iostream>
using namespace std;
int binarySearch(int arr[9], int n, int target){
    int start = 0;
    int end = n - 1;
    int mid = start/2  + end / 2;
    int ans = -1;
    while (start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start / 2 + end / 2;
    }
    return ans;
}

int main(){
    int arr[9] = {10, 20, 30, 40, 50, 70, 80, 90};
    int n = 9;
    int target = 90;

    int output = binarySearch(arr, n , target);
    if(output == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at index : "<<output<<endl;
    }
    return 0;
}