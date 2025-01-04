#include<iostream>
#include<vector>
using namespace std;

int FirstOccurence(vector<int>& arr, int n, int target){
    int start = 0;
    int end = n - 1;
    int ans = 0;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == target){
            mid = ans;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main() {
    vector<int>arr = {1,2,34,1,3,1,3,5,2,5,3,5,3,6,3,6,3,6,2,6,3,6};
    int n = arr.size();
    int target = 1;
    int ans = FirstOccurence(arr, n, target);
    if(ans == -1){
        cout<<"Target Element Not Present in the array"<<endl;
    }
    else{
        cout<<"Target Found at: "<<ans<<endl;
    }
    return 0;
}