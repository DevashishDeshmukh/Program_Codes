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

void insertAtHead(Node* &head, int val){
    Node* n= new Node(val);
    if(head==NULL){
        n->next=n;
        n->prev=n;
        head=n;
    }

    else{
        n->prev=head->prev;
        head->prev->next=n;
        head->prev=n;
        n->next=head;
        head=n;
    }
}


void insertAtTail(Node* &head, int val){
    Node* n= new Node(val);
    if(head==NULL){
        insertAtHead(head, val);
    }

    else{
        n->prev=head->prev;
        head->prev->next=n;
        head->prev=n;
        n->next=head;
    }
}

void remove(Node*& head, int pos){
    int removed;
    if(pos==1){
        removed=head->data;
        head->prev->next=head->next;
        head->next->prev=head->prev;
        head=head->next;
    }

    else{
        int count =0;
        Node* temp= head;
        while(count<pos-1){
            count++;
            temp=temp->next;
        }
        removed=temp->data;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }

    cout<<"Removed = "<<removed<<endl;
}

void display(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while (temp!=head);

    cout<<endl;
}



int main(){
    Node* head=NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 54);
    insertAtTail(head, 65);
    insertAtTail(head, 98);
    insertAtTail(head, 78);
    display(head);
    insertAtHead(head, 10);
    display(head);
    remove(head, 3);
    display(head);
    remove(head, 1);
    display(head);
    
}