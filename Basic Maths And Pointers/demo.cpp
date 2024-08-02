#include<iostream>
using namespace std;
int main()
{
        int b = 10;
        cout<<"value of ++b: "<<b<<endl;
        cout << ((++b) * (b++)) << endl;
        cout<<"value of ++b: "<<b<<endl;
        cout<<"value of b++: "<<b<<endl;
        int a = 10;
        cout << ((a++) * (++a)) << endl;
         cout<<"value of ++a: "<<++a<<endl;
          cout<<"value of a++: "<<a++<<endl;
        return 0;
}