#include "Stack.cpp"

int main() {
    Stack<int> intStack(5);

    intStack.Push(10);
    intStack.Push(20);
    intStack.Push(30);
    intStack.Push(40);
    intStack.Push(50);

    cout << "Stack after pushing elements:" << endl;
    cout<<intStack<<endl;

    if (intStack.IsFull())
        cout << "Stack is full." << endl;
    else
        cout << "Stack is not full." << endl;

    cout << "Top element of the stack: " << intStack.Peek() << endl;

    intStack.Pop();

    cout << "Stack after popping an element:" << endl;
    cout<<intStack<<endl;

    if (intStack.IsEmpty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}
