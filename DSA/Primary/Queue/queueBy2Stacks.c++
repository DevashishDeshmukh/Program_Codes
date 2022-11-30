#include <iostream>
#include <stack>
using namespace std;

class queueByStack
{
public:
    stack<int> s1;
    stack<int> s2;
};

void enqueue(queueByStack *qs, int x)
{
    qs->s1.push(x);
}

int dequeue(queueByStack *qs)
{
    int removed = -1;

    if (qs->s1.empty())
    {
        cout << "Queue is empty" << endl;
    }

    else
    {
        while (!qs->s1.empty())
        {
            qs->s2.push(qs->s1.top());
            qs->s1.pop();
        }

        removed = qs->s2.top();
        qs->s2.pop();

        while (!qs->s2.empty())
        {
            qs->s1.push(qs->s2.top());
            qs->s2.pop();
        }
    }

    return removed;
}

int Rear(queueByStack *qs)
{
    return qs->s1.top();
}

int Front(queueByStack *qs)
{

    int f = -1;

    if (qs->s1.empty())
    {
        cout << "Queue is empty" << endl;
    }

    else
    {
        while (!qs->s1.empty())
        {
            qs->s2.push(qs->s1.top());
            qs->s1.pop();
        }

        f = qs->s2.top();

        while (!qs->s2.empty())
        {
            qs->s1.push(qs->s2.top());
            qs->s2.pop();
        }
    }

    return f;
}

int main()
{
    queueByStack *qust = new queueByStack();
    enqueue(qust, 10);
    enqueue(qust, 15);
    enqueue(qust, 18);
    enqueue(qust, 25);

    cout << dequeue(qust) << endl;
    cout << dequeue(qust) << endl;
    cout << dequeue(qust) << endl;
    cout << dequeue(qust) << endl;
    cout << dequeue(qust) << endl;

    return 0;
}