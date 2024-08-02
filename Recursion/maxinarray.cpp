#include<iostream>
#include<limits.h>
using namespace std;
void findMax(int arr[], int size, int index, int &maxi){
    //base case
    if(index >= size){
        return;
    }
    //processing
    maxi = max(maxi, arr[index]);
    //recursive call
    findMax(arr, size, index+1, maxi);
}
int main()
{
    int arr[] = {44, 10, 20, 40, 333};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    findMax(arr, size, index, maxi);
    cout<<maxi;
    return 0;
}