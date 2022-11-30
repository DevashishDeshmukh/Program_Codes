#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;
    st.push(100);
    st.push(115);
    st.push(120);
    cout<<"isEmpty= "<<st.empty()<<endl;
    cout<<"size = "<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<"isEmpty= "<<st.empty()<<endl;
    cout<<"size = "<<st.size()<<endl;

    stack<char> sta;
    sta.push('{');

    cout<<sta.top();
}
