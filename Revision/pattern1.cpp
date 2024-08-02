#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}