#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool isOperand(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '(' || a == ')' || a == '^')
        return false;

    else
        return true;
}

int preStackOut(char b)
{
    if (b == '+' || b == '-')
        return 1;

    if (b == '*' || b == '/')
        return 3;

    if (b == '^')
        return 6;

    if (b == '(')
        return 7;

    if (b == ')')
        return 0;

    return -1;
}

int preStackIn(char c)
{
    if (c == '+' || c == '-')
        return 2;

    if (c == '*' || c == '/')
        return 4;

    if (c == '^')
        return 5;

    if (c == '(')
        return 0;

    return -1;
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
            if (st.empty() || preStackOut(infix[i]) > preStackIn(st.top()))
            {
                st.push(infix[i]);
                i++;
            }

            else
            {
                if (preStackOut(infix[i]) == preStackIn(st.top()))
                {
                    st.pop();
                    i++;
                }
                else
                {
                    post += st.top();
                    st.pop();
                }
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
    string str = "((a+b)*c)-d^e^f";
    cout << "Infix = " << str << endl;
    cout << "Postfix = " << infixToPostfix(str) << endl;
    return 0;
}
