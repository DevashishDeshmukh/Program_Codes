#include <bits/stdc++.h>
/*here we included our custom Queue.h header file that has Queue data structure defined in it */
#include "Queue.h"

using namespace std;

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void CreateTree();
    void PreorderRecursive(Node *p);
    void PostorderRecursive(Node *p);
    void InorderRecursive(Node *p);
    void PreorderIterative(Node *p);
    void PostorderIterative(Node *p);
    void InorderIterative(Node *p);
    void Levelorder(Node *p);
    int CountNodes(Node *p);
    int Height(Node *p);
};

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);
    cout << "Enter root value : ";
    cin >> x;
    root = new Node();
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("Enter left child of %d : ", p->data);
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter right child of %d : ", p->data);
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::PreorderRecursive(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        PreorderRecursive(p->lchild);
        PreorderRecursive(p->rchild);
    }
}

void Tree::InorderRecursive(Node *p)
{
    if (p)
    {

        InorderRecursive(p->lchild);
        cout << p->data << " ";
        InorderRecursive(p->rchild);
    }
}

void Tree::PostorderRecursive(Node *p)
{
    if (p)
    {

        PostorderRecursive(p->lchild);
        PostorderRecursive(p->rchild);
        cout << p->data << " ";
    }
}

void Tree::PreorderIterative(Node *p)
{
    stack<Node *> st;
    Node *t = p;
    while (t != NULL || !st.empty())
    {
        if (t != NULL)
        {
            cout << t->data << " ";
            st.push(t);
            t = t->lchild;
        }
        else
        {
            t = st.top();
            st.pop();
            t = t->rchild;
        }
    }
    cout << endl;
}

void Tree::InorderIterative(Node *p)
{
    stack<Node *> st;
    Node *t = p;
    while (t != NULL || !st.empty())
    {
        if (t != NULL)
        {
            st.push(t);
            t = t->lchild;
        }
        else
        {
            t = st.top();
            st.pop();
            cout << t->data << " ";
            t = t->rchild;
        }
    }
    cout << endl;
}

void Tree::PostorderIterative(Node *p)
{
    stack<Node *> st;
    Node *t = p;
    while (!st.empty() || t != NULL)
    {
        while (t)
        {
            st.push(t);
            st.push(t);
            t = t->lchild;
        }
        t = st.top();
        st.pop();

        if (!st.empty() && st.top() == t)
            t = t->rchild;
        else
        {
            cout << t->data << " ";
            t = NULL;
        }
    }
    cout << endl;
}

void Tree::Levelorder(Node *p)
{
    Queue q;
    cout << p->data << " ";
    q.enqueue(p);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        if (p->lchild)
        {
            cout << p->lchild->data << " ";
            q.enqueue(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << " ";
            q.enqueue(p->rchild);
        }
    }
}

int Tree::CountNodes(Node *p)
{
    int x, y;
    if (p != NULL)
    {
        x = CountNodes(p->lchild);
        y = CountNodes(p->rchild);
        return x + y + 1;
    }
    return 0;
}

int Tree::Height(Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;

    x = Height(p->lchild);
    y = Height(p->rchild);
    if (x > y)
        return x + 1;

    else
        return y + 1;

    return 0;
}

int main()
{
    Tree t;
    t.CreateTree();
    t.PostorderRecursive(t.root);
    cout << "     ";
    t.PostorderIterative(t.root);

    t.InorderRecursive(t.root);
    cout << "     ";
    t.InorderIterative(t.root);

    t.PreorderRecursive(t.root);
    cout << "     ";
    t.PreorderIterative(t.root);
    t.Levelorder(t.root);
    cout<<endl;

    cout<<"Nos of nodes in given tree : "<<t.CountNodes(t.root)<<endl;
    cout<<"Height of given tree : "<<t.Height(t.root)<<endl;
    

    cout << "Devashish";
    return 0;
}