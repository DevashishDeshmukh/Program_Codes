/*#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution
{
public:
	//Function to check if brackets are balanced or not.
	bool ispar(string x)
	{
		// Your code here
		stack<char> st;
		int i = 0;
		while (i < x.length())
		{
			if (x[i] == '{' || x[i] == '(' || x[i] == '[')
			{
				st.push(x[i]);
			}

			else
			{
				int a = st.top();
				if (st.empty() == false)
				{
					if (a == 40 && x[i] == 41)
					{
						st.pop();
					}
					else if (a == 91 && x[i] == 93)
					{
						st.pop();
					}

					else if (a == 123 && x[i] == 125)
					{
						st.pop();
					}

					else
						false;
				}

				else
					return false;
			}
			i++;
		}
		return st.empty();
	}
};

class Solution1
{
public:
	string reverseEqn(string s)
	{
		string a;
		stack<string> st;
		for (int i = 0; i <= s.length(); i++)
		{
			if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
			{
				a += s[i];
			}

			if ((s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') || i == s.length() - 1)
			{
				st.push(a);
				string sig;
				if (i != s.length() - 1)
				{
					sig+= s[i];
					st.push(sig);
				}
				
				a = "";
			}
		}

		string rev;
		while (st.empty() == false)
		{
			rev += st.top();
			st.pop();
		}
		return rev;
	}
};

int main()
{
	string str = "a+c-d5*e";
	/*Solution s;
	int a='(';
	cout << s.ispar(str) << endl<< str.length() << endl<<a;
	Solution1 srev;

	cout << str << endl;
	string r = srev.reverseEqn(str);
	cout << r;

	return 0;
}
*/


#include <iostream>
using namespace std;
# define n 10

class Queue
{
public:
    int front;
    int rear;
    int size;
    int *array;

    Queue()
    {
        size = n;
        front = rear = -1;
        array = new int[size];
    }
};

bool isFULL(Queue *q)
{
    if (q->rear == q->size - 1)
        return true;

    else
        return false;
}

bool isEmpty(Queue *q)
{
    if (q->rear == q->front)
        return true;

    else
        return false;
}

void enqueue(Queue *q, int x)
{
    if (isFULL(q))
    {
        cout << "Queue is full" << endl;
    }

    else
    {
        (q->rear)++;
        q->array[q->rear] = x;
    }
}

int dequeue(Queue *q)
{
    int removed = -1;
    if (isEmpty(q))
    {
        cout << "Queue is empty" << endl;
    }

    else
    {
        (q->front)++;
        removed = q->array[q->front];
    }

    return removed;
}

int mian()
{
    Queue *que = new Queue();
    cout << "aa" << isEmpty(que);

    return 0;
}

