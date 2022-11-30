
bool ispar(string x)
    {
        // Your code here
        int i=0;
        stack<char> st;
        char a;
        while(i<x.length()){
            a=x[i];
            cout<<a<<" ";
            i++;
            if(a=='(' || a=='{' || a=='['){
                st.push(a);
            }
            else if(!st.empty()){
                if(a==')' && st.top()=='('){
                    st.pop();
                }

                else if(a=='}' && st.top()=='{'){
                    st.pop();
                }

                else if(a==']' && st.top()=='['){
                    st.pop();
                }
                
                else return false;
            }
            
            else return false;
        }
        
        return st.empty();
    }