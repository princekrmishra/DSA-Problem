#include<iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = n; i >= 0; i--){
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;

    int ans = Sum(n);
    cout<<"ans: "<<ans<<endl;

    int summ = 0;
    summ = n * (n + 1)/2;
    cout<<"ANS: "<<summ<<endl;
    return 0;
}