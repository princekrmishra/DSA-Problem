#include<iostream>
using namespace std;
int findPivotElement(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e){
        if(s == e){
            return s;
        }
        else if(mid - 1 >= 0 && arr[mid] < arr[mid - 1]){
            return mid - 1;
        }
        else if(mid + 1 < n && arr[mid] > arr[mid + 1]){
            return mid;
        }
        else if(arr[s] > arr[mid]){
            e = mid - 1;
    }
    else {
        s = mid + 1;
}
    }
    return -1;
}
int main(){
    int arr[7] = {12, 14, 16, 2, 4, 6, 8};
    int n = 7;
    for(int i =0; i< n; i++){
        cout<<"element "<<arr[i]<<" is present at index "<<i<<endl;
    }
    int ans = findPivotElement(arr, n);
    cout << "The pivot element is at index :"<<ans<<endl;
    return 0;
}