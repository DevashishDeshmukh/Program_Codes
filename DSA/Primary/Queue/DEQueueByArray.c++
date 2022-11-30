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

void enqueueRear(queueArray *q, int x)
{

    if (q->rear==q->size-1)
    {
        cout << "Queue's rear is full" << endl;
    }

    else
    {
        q->rear++;
        q->arr[q->rear] = x;
    }
    return;
}


void enqueueFront(queueArray *q, int x)
{

    if (q->front==-1)
    {
        cout << "Queue's front is full" << endl;
    }

    else
    {
        q->arr[q->front] = x;
        q->front--;
    }
    return;
}


int dequeueFront(queueArray* q){
    int removed=-1;
    if(q->front==q->rear){
        cout<<"Queue is empty"<<endl;
    }

    else{
        q->front++;
        removed=q->arr[q->front];
    }
    return removed;
}


int dequeueRear(queueArray* q){
    int removed=-1;
    if(q->front==q->rear){
        cout<<"Queue is empty"<<endl;
    }

    else{
        removed=q->arr[q->rear];
        q->rear--;
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
    queueArray *a = new queueArray(4);
    enqueueRear(a, 23);
    enqueueRear(a, 25);
    enqueueRear(a, 105);
    cout<<"Front = "<<Front(a)<<endl;
    cout<<"Rear = "<<Rear(a)<<endl;
    cout<<dequeueFront(a)<<endl;
    enqueueFront(a, 47);
    cout<<dequeueFront(a)<<endl;
    cout<<dequeueRear(a)<<endl;


    return 0;
}