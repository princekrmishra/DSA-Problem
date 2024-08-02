#include<iostream>
using namespace std;
int climbing(int n){
    //base case
    if(n == 0 || n == 1){
        return 1;
    }
    //recursive call
    int ans = climbing(n - 1) + climbing(n - 2);
    return ans;
}
int main()
{
    cout<<climbing(5)<<endl;
    return 0;
}