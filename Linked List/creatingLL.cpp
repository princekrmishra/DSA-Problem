#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //default constructor
    Node(){
        this->next = NULL;
        //cout<<"I am Default constructor By static allocation"<<endl; //constructor called by static allocation

        cout<<"By dynamic alllocation"<<endl;
    }
    //parametric constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        cout<<"Inside Parametric constructor -> By dynamic alllocation"<<endl;
    }
};

void printLL(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> data <<" -> ";
            temp = temp -> next;
        }
        cout<<endl;
}

int main() {

    //node creation

    //Node a;

    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);
    Node* sixth = new Node(70);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = NULL;

    Node* head = first;
    cout<<"Printing the entire Liked List"<<endl;
    printLL(head);

    return 0;
}