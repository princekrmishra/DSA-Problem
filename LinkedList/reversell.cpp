#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};

Node* reverseList(Node* head) {
    // Base case
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Recursive call
    Node* newHead = reverseList(head->next);

    // Adjust the links
    head->next->next = head; // Point the next node's next to the current node
    head->next = nullptr;    // Set the current node's next to null

    return newHead; // Return the new head of the reversed list
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* first = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);
    Node* fifth = new Node(5);

    Node* head = first;
    cout << "Original list: ";
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}
