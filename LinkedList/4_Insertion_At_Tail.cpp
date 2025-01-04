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

void PrintLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtTail(Node* &head, Node* &tail, int data){
    if(!head){
        Node* newNode = new Node(data);
        newNode = head;
        newNode = tail;
    }
    else{
        Node* newNode = new Node(data);
        tail->next=newNode;
        newNode=tail;
    }
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
    Node* tail = fifth;

    cout<<"Printing LL Before Insertion: "<<endl;
    PrintLL(head);

    InsertAtTail(head, tail, 60);

    cout<<"Printing LL After Insertion: "<<endl;
    PrintLL(head);


    return 0;
}