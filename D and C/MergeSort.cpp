#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    
    int mid = (s+e)/2;
    int lenLeft = mid-s+1;
    int lenRight = e-mid;

    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    int k = s;

    for(int i = 0; i < lenLeft; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;

    for(int i = 0; i < lenRight; i++){
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int arrIndex = s;

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] <= right[rightIndex]){
            arr[arrIndex] = left[leftIndex];
            leftIndex++;
            arrIndex++;
        }
        else{
            arr[arrIndex] = right[rightIndex];
            rightIndex++;
            arrIndex++;
        }
    }
    while(leftIndex < lenLeft){
        arr[arrIndex] = left[leftIndex];
        leftIndex++;
        arrIndex++;
    }
    while(rightIndex < lenRight){
        arr[arrIndex] = right[rightIndex];
        rightIndex++;
        arrIndex++;
    }
    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e);
}

int main() {
    int arr[] = {2, 1, 6, 9, 4, 5};
    int n = 6;
    int s = 0;
    int e = n - 1;
    
    cout<<"Before merge sort: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    mergeSort(arr, s, e);

    cout<<"After merge sort: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}