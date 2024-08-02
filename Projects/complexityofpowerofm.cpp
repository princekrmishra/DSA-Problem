#include<iostream>
using namespace std;

double power(double x, int n){
    if(n==0){
        return 1;
    }
    double half = power(x, n/2);

    if(n % 2 == 0){
        return half * half;
    }
    else{
        return half * half * x;
    }
}
int main()
{
    double x;
    int n;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    double result = power(x, n);
    cout<<x<<" raised to the power "<<n<<" is: "<<result<<endl;
    return 0;
}