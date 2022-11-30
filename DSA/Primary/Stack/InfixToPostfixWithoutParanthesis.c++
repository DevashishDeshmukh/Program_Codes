#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool isOperand(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/')
        return false;

    else
        return true;
}

int precedence(char b)
{
    if (b == '+' || b == '-')
        return 1;

    if (b == '*' || b == '/')
        return 2;

    return 0;
}

string infixToPostfix(string infix)
{
    string post;
    stack<char> st;
    int i = 0;
    while (i < infix.length())
    {
        if (isOperand(infix[i]))
        {
            post += infix[i];
            i++;
        }

        else
        {
            if (st.empty() || precedence(infix[i]) > precedence(st.top()))
            {
                st.push(infix[i]);
                i++;
            }

            else
            {
                post += st.top();
                st.pop();
            }
        }
    }

    while (!st.empty())
    {
        post += st.top();
        st.pop();
    }

    return post;
}

int main()
{
    string str = "a+b*c-d/e";
    cout << "Infix = " << str << endl;
    cout << "Postfix = " << infixToPostfix(str) << endl;
    return 0;
}