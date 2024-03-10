#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {
    int val1, val2, key, val3, val4, val5, val6;
    LinkedList obj;
    obj.createLinkedList();

    cout << "Enter value to be inserted at the beginning: ";
    cin >> val1;
    obj.insertAtBeginning(val1);

    cout << "\nEnter value to be inserted at the end: ";
    cin >> val2;
    obj.insertAtEnd(val2);

    cout << "\nEnter key and values needed to insert before and after: ";
    cin >> key >> val3 >> val4;
    obj.insertBeforeKey(key, val3);
    obj.insertAfterKey(key, val4);

    obj.displayLinkedList();

    cout << "\nDeletion" << endl;
    obj.deleteFromFront();
    obj.deleteFromEnd();
    obj.displayLinkedList();

    cout << "\nEnter value to be deleted: ";
    cin >> val5;
    obj.deleteKey(val5);
    obj.displayLinkedList();

    LinkedList obj1;
    obj1.createLinkedList();

    cout << "\nConcatenation" << endl;
    LinkedList obj3 = obj1.concatenation(obj, obj1);
    obj3.displayLinkedList();

    LinkedList obj4;
    obj4.createLinkedList();

    cout << "\nEnter value to be searched: ";
    cin >> val6;
    obj4.search(val6);

    cout << "\nReverse Traversal: ";
    obj.reverseTraversal(obj.getHead());

    return 0;
}
