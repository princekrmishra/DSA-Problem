#include<iostream>
using namespace std;
int powerof2(int n){
    //base case
    if (n == 0){
        return 1;
    }
   
    //call
    int call = powerof2(n - 1);
    //processing
    int ans = 2 * call;
    return ans;
}
int main(){
    int n = 2;
    cout<<"The power of "<<n<<" is "<<powerof2(n);
    return 0;
}