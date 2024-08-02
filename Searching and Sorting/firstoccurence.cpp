#include<iostream>
using namespace std;
int findFirstOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    int mid = start/2 + end/2;
    int ans = -1;
  
    while(start <= end){
        if(arr[mid] == target){
            ans  = mid;
            end = mid-1;
            //left m jao
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
            }
        mid = start/2 + end/2;
    }
    return ans;
}
int main(){
    int arr[9] = {10, 20, 20, 20, 50, 70, 80, 90};
    int n = 9;
    int target = 50;
    int output = findFirstOccurence(arr, n , target);
    if(output == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at index : "<<output<<endl;
    }
    return 0;
}