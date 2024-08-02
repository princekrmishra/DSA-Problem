#include<iostream>
using namespace std;
void count(int n){
    // base case
    if(n == 0){
        return;
    }
    //processing
    cout<<n<<" ";
    //recursive relation
     count(n - 1);

}
int main()
{
    count(7);
    return 0;
}