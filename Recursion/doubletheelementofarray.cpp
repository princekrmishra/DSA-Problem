#include<iostream>
using namespace std;
void doubleElement(int arr[], int size, int index){
    //base case
    if(index >= size){
        return;
    }
    //processing
    arr[index] = 2 *  arr[index];
    //recursive call
    doubleElement(arr, size, index+1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    doubleElement(arr, size, index);
    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}