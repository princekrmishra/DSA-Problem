#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;

    q.push(3);

    cout<<"Size of queue: "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    //remove
    q.pop();
    
    cout<<"Size of queue: "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    //
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Front element is: "<<q.front()<<endl;

    cout<<"Last element is: "<<q.back()<<endl;
    return 0;
}