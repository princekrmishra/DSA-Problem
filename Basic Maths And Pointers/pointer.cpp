#include<iostream>
using namespace std;
int main()
{
    int a = 50;
    int* ptr = &a;
    //printing the value of a:- 50 
    cout<<"Printig the value of a :             "<<a<<endl;
    //printing the value of &a:- address of a
    cout<<"Printing the address of a:           "<<&a<<endl;
    //printing the value of ptr:- address of a
    cout<<"Printing the address stored in ptr: "<<ptr<<endl;
    //printing the value of &ptr:- address of ptr
    cout<<"Address of ptr:                      "<<&ptr<<endl;
    //printing the value of *ptr:- value of address stored in ptr
    cout<<"value of address stored in ptr:      "<<*ptr<<endl;
    return 0;
}