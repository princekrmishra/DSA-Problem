#include<iostream>
using namespace std;
int SearchInArray(int arr[], int size, int target, int index){
    //base case
    if(index >= size){
        cout<<"Not Found!!"<<endl;
        return 0;
    }
    //processing
    if(arr[index] == target){
        cout<<"Element Found at Index : "<<index<<endl;
        return 1;
    }
    //call
    return SearchInArray(arr, size, target, index+1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target;
    cout<<"Enter the targeted value : "<<endl;
    cin>>target;
    SearchInArray(arr, size, target, index);
    return 0;
}