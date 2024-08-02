#include<iostream>
using namespace std;
void lastOccurence(string&s, char x, int i, int&ans)
{
    
    if(i >= s.size()){
        return;
    }

    

    if(s[i] == x){
        ans = i;
    }
    lastOccurence(s, x, i + 1, ans);
}
int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;

    char x;
    cout<<"Enter the target element: "<<endl;
    cin>>x;

    int ans = -1;
    lastOccurence(s, x, 0, ans);
    cout<<ans;
    return 0;
}


























//brute force approach:
// int main()
// {
//     string arr;
//     int n;
//     string target;

//     cout<<"Enter the size of the array: "<<endl;
//     cin>>n;
    
//     cout<<"Enter the string: "<<endl;
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
    
//     cout<<"The String is: ";
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;

//     cout<<"Enter the target Element: "<<endl;
//     cin>>target;

//     for (int i = n; i >= 0; i--){
//          if(target == arr[i]){
//              cout<<i<<endl;
//              break;     
//              }
//      }

//         return 0;
// }