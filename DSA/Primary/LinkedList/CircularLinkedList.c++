#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
    }

    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head=n;
    }
}

void insertAtTail(Node *&head, int val)
{
    

    if (head == NULL)
    {
        insertAtHead(head, val);
    }

    else
    {
        Node *n = new Node(val);
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}

void remove(Node *&head, int pos)
{
    Node *temp = head;
    int removed;
    if (pos == 1)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        removed = temp->next->data;
        temp->next = temp->next->next;
        head = head->next;
    }

    else
    {
        int count = 1;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }

        removed = temp->next->data;
        temp->next = temp->next->next;
    }

    cout << "Removed = " << removed << endl;
}

void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}


void displayRecursive(Node* head, Node* p ){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<< p->data<<" ";
        displayRecursive(head, p->next);
    }
    flag=0;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 15);
    insertAtTail(head, 12);
    insertAtTail(head, 18);
    insertAtTail(head, 25);

    display(head);
    insertAtTail(head, 78);
    display(head);

    remove(head, 3);
    display(head);
    remove(head, 1);
    display(head);
    cout<<endl;
    displayRecursive(head, head);
}
