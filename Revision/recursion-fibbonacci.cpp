#include<iostream>
using namespace std;
int fib(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    //call
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}
int main()
{
    int n = 7;
    cout<<"The value of fibboncci series at "<<n<<" is equal to: "<<fib(n);
    return 0;
}