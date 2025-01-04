#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    
    return 0;
}