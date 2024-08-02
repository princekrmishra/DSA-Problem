#include<iostream>
using namespace std;
int main()
{
    int a = 50;
    int* ptr = &a;
    int** ptr1 = &ptr;
    cout<<"----content of a :-----"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    //cout<<"*a: "<<*a<<endl;
    cout<<"----content of ptr:-----"<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"&ptr: "<<&ptr<<endl;
    cout<<"----content of ptr1:----"<<endl;
    cout<<"ptr1: "<<&ptr1<<endl;
    cout<<"*ptr1: "<<*ptr<<endl;
    cout<<"**ptr1: "<<**ptr1<<endl;
    cout<<"&ptr1: "<<&ptr1<<endl;

    return 0;
}