#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int n){
    if(n <= 1){
        return false;
    }
   // int sqrtN = sqrt(n);
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int findprime(int n){
int c = 0;
//int sqrtN = sqrt(n);
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
    int find = findprime(n);
    for(int i = 0; i < n; i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}