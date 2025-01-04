#include<iostream>
using namespace std;
int reversed(int n){
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int n = 12345;
    int ans = reversed(n);
    cout<<ans;
    return 0;
}