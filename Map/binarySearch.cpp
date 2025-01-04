#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>&arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s <= e){
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] > target){
            e = mid - 1;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main() {
    vector<int>arr = {10, 20, 30, 40, 50};
    int target = 20;
    int ans = BinarySearch(arr, target);
    if(ans == -1){
        cout<<"Target Not Found";
    }
    else{
        cout<<"Target Found";
    }
    return 0;
}