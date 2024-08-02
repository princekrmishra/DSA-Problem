#include<iostream>
using namespace std;
void inputoutput(char ch[]){
    
    //for input
    cout<<"Enter the value of each index: "<<endl;
    cin.getline(ch, 100);
    
    //for output
    cout<<"output is: "<<endl;
    cout<<ch<<endl;
    // value assigned at each index
    for(int i = 0; i < 10; i++){
        cout<<"Value assigned at index "<<i<<" is "<<ch[i]<<endl;
    }
    cout<<"value at index 7 is : "<<ch[7];
    char temp  = ch[7];
    int value = (int)temp;
    cout<<"integer value at index 7 is : "<<value<<endl;
}
int main()
{
    char ch[10];   
    inputoutput(ch);
    return 0;
}