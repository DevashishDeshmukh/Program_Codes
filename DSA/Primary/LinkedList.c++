#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};



void insertAtTail(node* &head, int val){

    node* n= new node(val);
    if(head==NULL){
        head=n;
    }
    else{
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    }
}


void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;

}


bool search(node* &head, int key){

    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key)
        return true;
        temp=temp->next;
    }

    return false;
}


void removeNodeAt(node* &head, int index ){

    int removed;
    if(index==0){
        removed=head->data;
        head=head->next;
    }
  
    else{
    node* temp=head;
    for (int i = 0; i < index-1; i++)
    {
        temp=temp->next;
    }
    removed=(temp->next)->data;
    temp->next=(temp->next)->next;
    }

    cout <<"\nremoved element ="<<removed<<endl;

}


void printLinledList(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    node* head=NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 15);
    printLinledList(head);
    insertAtTail(head, 45);
    printLinledList(head);
    removeNodeAt(head, 0);
    cout<<"List after removing=";
    printLinledList(head);


    return 0;
}