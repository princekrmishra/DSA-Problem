#include<iostream>
using namespace std;
int fibbonacci(int n){
    //base case 
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    //recursive  call
    int ans = fibbonacci(n - 1) + fibbonacci(n - 2);
    return ans;
}
int main()
{
    cout<<fibbonacci(7)<<endl;
    return 0;
}