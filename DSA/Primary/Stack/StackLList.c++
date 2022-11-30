#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 
};

class stack{
    Node* top=NULL;

    public:
    void push(int val){
        Node* n=new Node;

        if(n==NULL){
            cout<<"Stack overflow"<<endl;
        }

        else{
            n->data=val;
            n->next=top;
            top=n;
        }
    }


    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
        }

        else{
            Node* toRemove=top;
            top=top->next;
            delete toRemove;
        }
    }

    int peep(){
        if(top==NULL){
            cout<<"Stack is empty ";
            return-1;
        }

        else{
            return top->data;
        }
    }


    bool isEmpty(){
        if(top==NULL){
            return true;
        }

        else{
            return false;
        }
    }
};

int main(){
    stack st;
    st.push(10);
    st.push(25);

    cout<<st.peep()<<endl;
    st.pop();
    cout<<st.peep()<<endl;
    cout<<st.isEmpty()<<endl;
    st.pop();
    cout<<st.peep()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl;

}
