#include "Stack.cpp"

int main(){
    Stack<int> s(5);
    bool c= true;
    while(c==true){
        int a;
        cout<<"enter element\n>>";
        cin>>a;
        s.Push(a);
        cout<<"continue 1/0";
        cin>>a;
        if(a==1){
            c= true;
        }
        else{
            c= false;
        }
    }
    cout<<s;
}
