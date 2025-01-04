#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(){
        this->next = NULL;
    }

    Node(int data){

        this->data = data;
        this->next = next;
    }
};

void printList(Node* &head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    
}

int main() {
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    Node* head = first;

    printList(head);

    return 0;
}