#include<iostream>
using namespace std;

void reversearray(int arr[], int n, int i){
    int s = 0;
    int e = n - 1;
    if(i >= n){
        return;
    }

    reversearray(arr, n, i + 1); 

    while (s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
       
}

int main()
{
    int arr[]={10,20,30};
    int n = 3;
    int i = 0;
    reversearray(arr, n, i);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}