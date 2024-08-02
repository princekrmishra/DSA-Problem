#include <iostream>
#define SIZE 5

using namespace std;

template <class T>
class Stack{
public:
    Stack();
    void push(T x);
    T pop();
    T topElement();
    bool isFull();
    bool isEmpty();

private:
    int top;
    T st[SIZE];
};

template <class T>
Stack<T>::Stack() { top = -1; }
template <class T>
void Stack<T>::push(T x){
    if (isFull()){
        cout << "Stack is full\n";
    
    cout << "Inserted element " << x << endl;
    top = top + 1;
    st[top] = x;
}

template <class T>
bool Stack<T>::isEmpty(){
    if (top == -1)
        return 1;
    else
        return 0;
}

template <class T>
bool Stack<T>::isFull(){
    if (top == (SIZE - 1))
        return 1;
    else
        return 0;
}

template <class T>
T Stack<T>::pop(){
    T popped_element = st[top];
    top--;
    return popped_element;
}

template <class T>
T Stack<T>::topElement(){
    T top_element = st[top];
    return top_element;
}

int main(){
    Stack<int> stack;
    Stack<string> string_stack;
    int choice, value;

    while (true)
    {
        cout << "\n1. Push\n2. Pop\n3. Check if Empty\n4. Check if Full\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            cout << stack.pop() << " popped from stack\n";
            break;
        case 3:
            if (stack.isEmpty())
                cout << "Stack is empty\n";
            else
                cout << "Stack is not empty\n";
            break;
        case 4:
            if (stack.isFull())
                cout << "Stack is full\n";
            else
                cout << "Stack is not full\n";
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
