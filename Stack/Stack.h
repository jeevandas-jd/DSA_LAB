#include <iostream>
#include <ostream>

using namespace std;
template <class T>
class Stack{
private:
    int Top;
    int Size;
    T s[100];
public:
    bool IsEmpty();
    bool IsFull();
    Stack(int);
    void Push(T a);
    void Peek();
    void Pop();
    void display();
    template <class U>
    friend ostream& operator<<(ostream&,Stack<U>);

};
