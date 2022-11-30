#include <bits/stdc++.h>
using namespace std;

class queueArray
{
public:
    int rear;
    int front;
    int size;
    int *arr;

    queueArray(int n)
    {
        size = n;
        rear = front = -1;
        arr = new int[size];
    }
};


bool isEmpty(queueArray *q){
    if(q->front==q->rear)
    return true;

    else return false;
}

bool isFull(queueArray *q){
    if(q->rear==q->size-1)
    return true;

    else return false;
}

void enqueue(queueArray *q, int x)
{

    if (isFull(q))
    {
        cout << "Queue is full" << endl;
    }

    else
    {
        q->rear++;
        q->arr[q->rear] = x;
    }
    return;
}


int dequeue(queueArray* q){
    int removed=-1;
    if(isEmpty(q)){
        cout<<"Queue is empty"<<endl;
    }

    else{
        q->front++;
        removed=q->arr[q->front];
    }
    return removed;
}


int Front(queueArray* q){
    return q->arr[q->front+1];
}

int Rear(queueArray* q){
    return q->arr[q->rear];
}


int main()
{
    queueArray *a = new queueArray(3);
    enqueue(a, 23);
    enqueue(a, 47);
    enqueue(a, 25);
    cout<<"Front = "<<Front(a)<<endl;
    cout<<"Rear = "<<Rear(a)<<endl;
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;

    return 0;
}