#include "LinkedList.h"
#include <iostream>

using namespace std;

Node::Node() {
    this->data = 0;
    this->next = nullptr;
}

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

void Node::setData(int x) {
    this->data = x;
}

int Node::getData() {
    return data;
}

void Node::setNext(Node* next) {
    this->next = next;
}

Node* Node::getNext() {
    return next;
}

LinkedList::LinkedList() {
    head = new Node();
}

Node* LinkedList::getHead() {
    return head;
}

void LinkedList::createLinkedList() {
    Node* current = head;
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        int x;
        cout << "Enter data: ";
        cin >> x;
        Node* node = new Node(x);
        current->setNext(node);
        current = node;
    }
}

void LinkedList::displayLinkedList() {
    Node* current = head->getNext();
    while (current != nullptr) {
        cout << current->getData() << " ";
        current = current->getNext();
    }
    cout << endl;
}



