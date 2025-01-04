#include<iostream>
using namespace std;

long long merge(int arr[], int s, int mid, int e){
    long long inv = 0;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    for(int i = 0; i < lenLeft; i++){
        left[i] = arr[s + i];
    }
    
    for(int i = 0; i < lenRight; i++){
        right[i] = arr[mid+i+1];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int arrIndex = s;

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[arrIndex] = left[leftIndex];
            arrIndex++;
            leftIndex++;
        }
        else{
            arr[arrIndex] = right[rightIndex];
            inv += lenLeft - leftIndex;
            arrIndex++;
            rightIndex++;
        }
    }
    while(rightIndex < lenRight){
            arr[arrIndex] = right[rightIndex];
            arrIndex++;
            rightIndex++;
    }
    while(leftIndex < lenLeft){
            arr[arrIndex] = left[leftIndex];
            arrIndex++;
            leftIndex++;
    }
    
    delete []left;
    delete []right;
    return inv;
}   

long long mergeSort(int arr[], int s, int e){
    long long inv = 0;
    if(s < e){
        int mid = (s+e)/2;
        inv += mergeSort(arr, s, mid);
        inv += mergeSort(arr, mid+1, e);
        inv += merge(arr, s, mid, e);
    }
    return inv;
}
int main() {
    int n;
    cout<<"Enter the number of Elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int s = 0;
    int e = n - 1;
    long long ans = mergeSort(arr, s, e);
    cout<<endl;
    cout<<"The inversion count is :-> "<<ans<<endl;
    return 0;
}