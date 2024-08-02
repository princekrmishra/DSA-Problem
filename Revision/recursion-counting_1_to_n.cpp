#include<iostream>
using namespace std;
int revCounting(int n){
    //base case
    if (n == 0){
        return -1;
    }
    
    // }sssssss
    //calls
    int ans = revCounting(n - 1);
    //processing
    cout<<n<<" ";
    return ans;
}
int main()
{
    revCounting(10);
    return 0;
}