// by using 2 pointer
// optimal


#include<iostream>
using namespace std;
bool keypair(int arr[], int n, int target){
    int l = 0;
    int h = n - 1;
    while(l<h){
        int csum = arr[l]+arr[h];
        if(csum == target){
            cout<<"Element is present at indices : "<<l<<" and "<<h<<endl;
            return true;
        }
        else if (csum>h){
            h--;
        }
        else{
            l++;
        }
    }    return false;
}
int main(){
    int arr[4] = {2,7,45,89};
    int n = 4, target = 9;
    keypair(arr, n, target);
    return 0;
}


// //by brute force
// //not optimal
// #include<iostream>
// using namespace std;
// bool iskeypair(int arr[], int n, int target){
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; i<n; i++){
//             if(arr[i]+arr[j]==target){
//                  cout<<"Element is at index : "<<i<<" and "<<j;
//                  return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     int arr[4] = {2,7,11,15};
//     int n = 4;
//     int target = 9;
//     iskeypair(arr, n, target);
//     return 0;
// }