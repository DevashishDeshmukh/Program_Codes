#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
    }

    else
    {
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
    }

    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}

void remove(Node *&head, int pos)
{
    int removed;
    if (pos == 1)
    {
        removed = head->data;
        head = head->next;
        head->prev = NULL;
    }

    else
    {
        int count = 0;
        Node *temp = head;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }
        removed = temp->data;
        temp->prev->next = temp->next;

        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
    }

    cout << "Removed = " << removed << endl;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* & head){
    Node* temp=head;
    Node* front=NULL;
    while(temp!=NULL){
        front=temp->next;
        temp->next=temp->prev;
        temp->prev=front;
        if(front==NULL)
        return temp;
        else temp=front;
    }
    return NULL;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 15);
    insertAtTail(head, 8);
    display(head);
    insertAtTail(head, 45);
    display(head);
    insertAtHead(head, 56);
    display(head);
    remove(head, 3);
    display(head);
    remove(head, 1);
    display(head);
    remove(head, 3);
    display(head);
    Node* rev=reverse(head);
    display(rev);


}