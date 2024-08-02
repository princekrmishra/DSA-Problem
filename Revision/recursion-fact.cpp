#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n == 0 || n == 1){
        return 1;
    }
    //processing
    // int ans = n * fact(n - 1);
    // return ans;


    //recursive call
    int recursion = fact(n - 1);
    int ans = n * recursion;
    return ans;

}
int main()
{
    cout<<"The factorial is "<<fact(5)<<endl;
    return 0;
}