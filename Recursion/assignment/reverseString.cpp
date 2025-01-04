#include<iostream>
using namespace std;

void reverseString(string&str, int s, int e){
    if(s > e){
        return;
    }

    swap(str[s], str[e]);

    reverseString(str, s+1, e-1);

}
int main() {
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;

    int s = 0;
    int e = str.size() - 1;
    
    reverseString(str, s, e);

    cout<<"The ans is : "<<str<<endl;
        
    return 0;
}