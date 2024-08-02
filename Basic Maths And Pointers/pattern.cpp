#include<iostream>
using namespace std;
int main()
{
    int n = 5;
     for(int i = 0; i < n; i = i + 1){
        for(int j = 0; j < n + 1; j = j + 1){
            cout<<"* ";
        }
        cout<<endl;

     }
    return 0;
}