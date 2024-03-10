#include <iostream>
using namespace std;
class Node {
    int data;
    Node* next;

public:
    Node();
    Node(int data);
    void setData(int x);
    int getData();
    void setNext(Node* next);
    Node* getNext();
};

class LinkedList {
    Node* head;

    bool linearSearch(int key);
    void swap(Node* a, Node* b);

public:
    LinkedList();
    Node* getHead();
    void createLinkedList();
    void displayLinkedList();
    void insertAtBeginning(int key);
    void insertAtEnd(int key);
    void insertAfterKey(int key, int item);
    void insertBeforeKey(int key, int item);
    void deleteFromFront();
    void deleteFromEnd();
    void deleteKey(int key);
    LinkedList concatenation(LinkedList l1, LinkedList l2);
    void search(int key);
    void reverseTraversal(Node* node);
    ~LinkedList();
};
