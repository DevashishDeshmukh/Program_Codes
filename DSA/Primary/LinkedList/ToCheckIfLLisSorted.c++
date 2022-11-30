// C++ program to recursively check Linked List
// is sorted in descending order or not
#include <bits/stdc++.h>
using namespace std;

/* Linked list node */
struct Node
{
    int data;
    struct Node *next;
};

// function to Check Linked List is
// sorted in descending order or not
bool isSortedRecursive(struct Node *head)
{
   /* // Base cases
    if (head == NULL || head->next == NULL)
        return true;

    // Check first two nodes and recursively
    // check remaining.
    return (head->data > head->next->data &&
            isSortedRecursive(head->next));
    */


   if(head->next!=NULL){
       if(head->data<head->next->data){
           isSortedRecursive(head->next);
       }
 
       else return false;
   }

   else return true;
}

bool isSortedIterative(struct Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data >= temp->next->data)
        {
            return false;
        }

        else
        {
            temp = temp->next;
        }
    }
    return true;
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = data;
}

Node* reverseListRecursive(Node* head){

    
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* rest= reverseListRecursive(head->next);
    head->next->next=head;
    head->next = NULL;
    return rest;
}


Node* reverseListIterative(Node *head)
    {
        // code here
        // return head of reversed list
        Node* temp=head;
        Node* previous=NULL;
        Node* front=NULL;
        while(temp!=NULL){
            front=temp->next;
            temp->next=previous;
            previous=temp;
            temp=front;
        }
        head= previous;
        return head;
    }

// Driver program to test above
int main()
{
    struct Node *head = newNode(0);
    head->next = newNode(2);
    head->next->next = newNode(8);
    head->next->next->next = newNode(6);

    isSortedRecursive(head) ? cout << "Yes" : cout << "No"<<endl;
    isSortedIterative(head) ? cout << "Yes" : cout << "No"<<endl;


    cout<<"Proper LL  = ";
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl<<"Reversed LL by iterative way = ";
    temp =reverseListIterative(head);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    int a=0;
    Node* e=NULL;
    cout<<endl<<"Reversed LL by Recursive way = ";
    temp=reverseListRecursive(head);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        a++;
    }
    cout<<endl<<a<<endl;


    return 0;
}
