#include<iostream>
using namespace std;
int powerofThree(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
       
        return 1;
    }
    while(n % 3 == 0){
        n /= 3;                         // n = n / 3;
    }
    return n;
}
int main()
{
cout<<powerofThree(27)<<endl;
    return 0;
}