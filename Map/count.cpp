#include<iostream>
using namespace std;

int main() {
    int n = 12345;
    int ans = sizeof(n)+1;
    cout<<"ans: "<<ans<<endl;

    //2nd way
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    cout<<"Ans by While LOOP: "<<count<<endl;
    
    return 0;
}