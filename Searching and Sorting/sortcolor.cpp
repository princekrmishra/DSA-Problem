#include<iostream>
using namespace std;
void sortColour(int arr[], int n){
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            countZero++;
        }
        else if(arr[i] == 1){
            countOne++;
        }
        else{
            countTwo++;
        }
    }
    int i = 0;
    while(countZero>0){
        arr[i++] = 0;
        countZero--;
    }
    while(countOne>0){
        arr[i++] = 1;
        countOne--;
    }
    while(countTwo>0){
        arr[i++] = 2;
        countTwo--;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] = {1,1,0,2,1,2};
    int n = 6;
    sortColour(arr, n);
    
    return 0;
}