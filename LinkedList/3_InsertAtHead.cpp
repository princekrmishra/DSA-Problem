#include<iostream>
using namespace std;

class LinkedList{
    public:
    int data;
    LinkedList *next;

    //constructor
    LinkedList(){
        //cout<<"This is a default Constructor"<<endl;
        this->next=NULL;
    }
    LinkedList(int data){
        //cout<<"This is a parametrised Constructor"<<endl;
        this->data=data;
        this->next=next;
    }
};

void insertAtHead(LinkedList* &head, int data){         //yha pass by reference se krna pdega otherwise ye insert yha nhi ho payega
    //create new node ->temp
    LinkedList* newNode = new LinkedList(data);
    //temp->next=head
    newNode->next=head;
    //head=temp
    head=newNode;
}

void printLL(LinkedList* head){
    LinkedList* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    LinkedList l1;  //default constructor called and LL is created
    LinkedList *first = new LinkedList(10);
    LinkedList *sec = new LinkedList(20);
    LinkedList *third = new LinkedList(30);
    LinkedList *fourth = new LinkedList(40);
    LinkedList *fifth = new LinkedList(50);
    
    first->next=sec;
    sec->next = third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    LinkedList *head = first;
    cout<<"Insertion before adding: "<<endl;
    printLL(head);
    insertAtHead(head, 100);
    cout<<"Insertion After adding: "<<endl;
    printLL(head);
    return 0;
}