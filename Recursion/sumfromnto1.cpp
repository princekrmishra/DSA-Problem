#include<iostream>
using namespace std;
int sum(int n){
    //base case
    if(n == 1){
        return 1;
    }
    //recursive call
    int ans = n + sum(n - 1);
    return ans;
}
int main()
{
    cout<<sum(5);
    return 0;
}