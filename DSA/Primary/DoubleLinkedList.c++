#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
        head = n;

    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        n->prev = temp;
        temp->next = n;
    }
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
        head = n;

    else
    {
        n->next = head;
        head->prev = n;
        head = n;
    }
}

bool search(node *&head, int key)
{

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }

    return false;
}

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeNodeAt(node *&head, int index)
{
    int removed;
    if (index == 0)
    {
        removed = head->data;
        (head->next)->prev = NULL;
        head = head->next;
    }

    else
    {
        node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        removed = (temp->next)->data;
        temp->next = (temp->next)->next;
        (temp->next)->prev = temp;
    }

    cout << "\nremoved element =" << removed << endl;
}

void printListReverse(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp->prev != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << temp->data << " ";

    cout << endl;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 12);
    insertAtTail(head, 15);
    insertAtTail(head, 11);
    insertAtTail(head, 22);
    printList(head);

    printListReverse(head);

    insertAtHead(head, 555);
    printList(head);

    removeNodeAt(head, 2);
    cout << "List after removing=";
    printList(head);
    printListReverse(head);

    return 0;
}