#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int target = 8;
    int n = 5;
    bool flag = 0; //not found
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<"Target fount at "<<arr[i]<<endl;
            flag = 1;
            break;
        }
    }
    if(flag ==1 ){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}