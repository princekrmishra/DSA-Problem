#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void CreateTail(Node* &head, Node* &tail){
    Node* temp = head;
    while(temp != NULL){
        temp=temp->next;
    }
    temp=tail;
    cout<<"Tail is: "<<temp->data<<"->";
}
int main() {
    Node* first = new Node(10);
    Node* sec = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    first->next=sec;
    sec->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    Node* head = first;
    Node* tail = NULL;

    CreateTail(head, tail);

    return 0;
}