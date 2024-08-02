#include<iostream>
using namespace std;
int Counting(int n){
    //base case
    if(n == 0){
        return -1;
    }
    
    //processing
    cout<<n<<" ";
    //calls
    
    return Counting(n - 1);
}
int main()
{
    Counting(10);
    return 0;
}