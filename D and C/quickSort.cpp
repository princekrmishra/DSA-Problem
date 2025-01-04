#include<iostream>
using namespace std;

void quickSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int pivot = e;
    int i = s - 1;
    int j = s;

    while ( j < pivot){
        if (arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr, s, i - 1);
    quickSort(arr, i + 1, e);
}
int main() {
    int n = 8;
    int arr[8];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);
    cout<<"Sorted array is: ";
    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}