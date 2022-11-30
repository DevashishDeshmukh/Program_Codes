//Here we are only evaluating expression having 0 to 9 integers
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

int evaluation(string post)
{
    stack<int> st;
    int i = 0;

    while (i < post.length())
    {
        if (isOperand(post[i]))
        {
            st.push(post[i] - '0'); //This helps to push value int 3 in stack intead of ascii value of  char 3
            i++;
        }

        else
        {
            int x2 = st.top();
            st.pop();
            int x1 = st.top();
            st.pop();

            int res = 0;

            switch (post[i])
            {
            case '+':
                res = x1 + x2;
                break;

            case '-':
                res = x1 - x2;
                break;

            case '*':
                res = x1 * x2;
                break;

            case '/':
                res = x1 / x2;
                break;

            default:
                res = 0;
                break;
            }

            st.push(res);
            i++;
        }
    }
    return st.top();
}

int main()
{
    string exp = "35*62/+4-";
    cout << "value = " << evaluation(exp);

    return 0;
}