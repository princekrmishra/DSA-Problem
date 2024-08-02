#include<iostream>
using namespace std;
int printSum(int n){
    //base case
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    else{
        return n + printSum(n - 1);
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"The sum of 1 to "<<n<<" is "<<printSum(n);
    return 0;
}