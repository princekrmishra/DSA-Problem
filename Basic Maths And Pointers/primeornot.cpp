//by noop approach

#include<iostream>
using namespace std;

bool is_prime(int n){
    if(n<=1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;

        }
    }
    return true;
}

int findPrime(int n){
int c =0;
for(int i = 0; i < n; i++){
    if(is_prime(i)){
        ++c;
    }
}
return c;
}

int main()
{
    int n = 25;
    is_prime(n);
    int prime = findPrime(n);

    for(int i = 0; i < n; i++){
        if(is_prime(i) ){
            cout<<i<<" ";
        }
    }
    return 0;
}