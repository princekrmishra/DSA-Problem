#include<iostream>
using namespace std;

void lastOccurenceRTL(string&s, char x, int i, int&ans){
    if(i < 0){
        return;
    }

    if(s[i] == x){
        ans = i;
        return;
    }

    lastOccurenceRTL(s, x, i - 1, ans);
}

/*void lastOccurenceLTR(string&s, char x, int i, int&ans){
    if(i > s.size()){
        return;
    }

    if(s[i] == x){
        ans = i;
    }

    lastOccurenceLTR(s, x, i + 1, ans);
}*/
int main() {
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    char x;
    cout<<"Enter the character to find its last occurence: "<<endl;
    cin>>x;

    int ans = -1;
    int i = s.size() - 1;
    lastOccurenceRTL(s, x, i, ans);

    cout<<"The last occurence is : "<<ans;


    return 0;
}