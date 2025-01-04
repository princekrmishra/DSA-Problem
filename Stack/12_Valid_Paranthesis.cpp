#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool valid_Character(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    else{
        return false;
    }
}

char toLower(char ch){
    if(ch >= 'A' && ch <= 'Z' || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;

    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main() {

    string s;

    cout<<"Enter a string: ";
    getline(cin, s);

    string temp = "";

    for(int j = 0; j < s.length(); j++){
        if(valid_Character(s[j])){
           temp.push_back(s[j]);
        }
    }    

    for(int j = 0; j < temp.length(); j++){
        temp[j] = toLower(temp[j]);
    }

    return checkPalindrome(temp);
}