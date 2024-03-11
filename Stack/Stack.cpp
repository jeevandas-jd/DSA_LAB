#include "Stack.h"
template <class T>
Stack<T>::Stack(int size) {
    Top=-1;
    Size=size;
    T s[size];
}
template <class T>
bool Stack<T>::IsEmpty() {
    if(Top==-1){
        return true;
    }
    else{
        return false;
    }
}
template <class T>
bool Stack<T>::IsFull() {
    if(Top==Size-1){
        return true;
    }
    else{
        return false;
    }
}
template <class T>
void Stack<T>::Push(T a) {
    bool c;
    c =IsFull();
    if(c== false){
        Top=Top+1;
        s[Top]=a;
    } else if (c==true){
        cout<<"stack OverFlow!!"<<endl;
    }
}
template <class T>
void Stack<T>::Pop() {
    bool c;
    c=IsEmpty();
    if(c== false){
        Top=Top-1;
    }
    else{
        cout<<"staack UnderFlow"<<endl;
    }
}
template <class U>
ostream& operator <<(ostream& os,Stack<U> M){
    int i;
    os<<endl;
    if(not M.IsEmpty() ) {
        for (i = 0; i < M.Top; i++) {
            cout << M.s[i]<<" ";
        }
    }
    return os;

}
template <class T>
void Stack<T>::display() {
    if(not IsEmpty()) {
        for (int i = 0; i <=Top; i++) {
            cout << s[i];
        }
    }
}