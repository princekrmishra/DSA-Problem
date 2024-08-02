#include<iostream>
using namespace std;
int findLastOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    int mid = start/2 + end/2;
    int ans = -1;
  
    while(start <= end){
        if(arr[mid] == target){
            ans  = mid;
            start = mid+1;
            //right m jao
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
    int target = 20;
    int ans = findLastOccurence(arr, n , target);
    if(ans == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at index : "<<ans<<endl;
    }
    return 0;
}