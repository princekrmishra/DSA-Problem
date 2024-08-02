#include<iostream>
using namespace std;
bool CheckSorted(int arr[], int size, int index){
    //base case
    if(index >= size){
        return true;
    }

    //processing
    if(arr[index] > arr[index - 1]){
        //age ka check krenge through recursion
        bool nextans = CheckSorted(arr, size, index + 1);
        return nextans;
    }
    else{
        return false;
    }
}
int main()
{
    int arr[] = {20, 439, 4355, 25431, 1345542};
    int size = 5;
    int index = 1;
    
    bool isSorted = CheckSorted(arr, size, index);

    if(isSorted){
        cout<<"The array is sorted."<<endl;
    }else{
        cout<<"The array is not sorted."<<endl;
    }
    return 0;
}