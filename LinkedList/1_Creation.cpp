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

void printLL(LinkedList *head){
    //always create temp pointer for traversal 
    //never use actual pointer
    LinkedList *temp=head;
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
    cout<<"Printing LL: "<<endl;
    printLL(head);
    return 0;
}