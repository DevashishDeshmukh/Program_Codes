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
        rear = front = 0;
        arr = new int[size];
    }
};


bool isEmpty(queueArray *q){
    if(q->front==q->rear)
    return true;

    else return false;
}

bool isFull(queueArray *q){
    if(((q->rear+1)%q->size)==q->front)
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
        q->rear=(q->rear+1)%q->size;
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
        q->front=(q->front+1)%q->size;
        removed=q->arr[q->front];
    }
    return removed;
}


int Front(queueArray* q){
    return q->arr[(q->front+1)%q->size];
}

int Rear(queueArray* q){
    return q->arr[q->rear];
}


int main()
{
    queueArray *a = new queueArray(4);
    enqueue(a, 23);
    enqueue(a, 47);
    enqueue(a, 25);
    cout<<"full = "<<isFull(a)<<endl;
    enqueue(a, 58);
    cout<<"Front = "<<Front(a)<<endl;
    cout<<"Rear = "<<Rear(a)<<endl;
    cout<<dequeue(a)<<endl;
    enqueue(a, 58);
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;
    return 0;
}