#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class QueueLL
{
    public:
    node *front, *rear;

    QueueLL(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(int x)
    {
        node *temp= new node(x);
        if (temp == NULL)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if (front == NULL)
            {
                front = rear = temp;
            }
            else
            {
                rear->next = temp;
                rear = temp;
            }
        }
    }

    int dequeue()
    {
        int removed = -1;
        node* rem;
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            rem=front;
            removed = front->data;
            front = front->next;
            delete(rem);
        }

        if(front==NULL){
            rear=NULL;
        }
        return removed;
    }

    int Frist()
    {
        return front->data;
    }

    int Last()
    {
        return rear->data;
    }

};

 int main()
{
    QueueLL qll;
    cout << "1" << endl;
    qll.enqueue(10);
    qll.enqueue(12);
    qll.enqueue(18);
    qll.enqueue(19);

    cout << qll.Last() << endl;
    cout << qll.Frist() << endl;
    cout << qll.dequeue()<< endl;
    cout << qll.dequeue()<< endl;
    cout << qll.dequeue()<< endl;
    cout << qll.dequeue()<< endl;
    cout << qll.dequeue()<< endl;
    

    return 0;
}