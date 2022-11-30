#include <iostream>
using namespace std;

#define n 1000
 

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int val){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
        }

        else{
            top++;
            arr[top]=val;
        }
    }


    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }

        else{
            top--;
        }
    }

    int peep(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return-1;
        }
        
        else{
        return arr[top];
        }
    }

    bool isEmpty(){
        if(top==-1){
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
    st.push(90);
    st.push(12);

    cout<<"peep gives = "<<st.peep()<<endl;
    st.pop();
    cout<<"peep gives = "<<st.peep()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl; 
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl; 

    return 0;
}