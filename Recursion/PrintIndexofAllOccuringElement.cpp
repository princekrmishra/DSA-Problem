#include<iostream>
using namespace std;
void printOccurence(int arr[], int size, int index, int target){
    //base case
    if(index >= size){
        return;
    }
    if(arr[index] == target){
        cout<<index<<" ";
    }
    //processing
    
    //recursive call
    printOccurence(arr, size, index+1, target);
}
int main()
{
    int arr[] = {10, 2, 10, 2, 10};
    int size = 5;
    int index = 0;
    int target = 10;
    printOccurence(arr, size, index, target);
    
    return 0;
}