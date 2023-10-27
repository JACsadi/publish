#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node *next;
};

Node* Append(Node *root, int x)
{
    Node *newnode = new Node();
    newnode -> val = x;
    newnode -> next = NULL;
    //new node created

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        Node *currNode = root;
        while(currNode->next != NULL)
        {
            currNode = currNode->next;
        }
        currNode -> next = newnode;
    }
    return root;
}

Node* InserT(Node *root, int x,int pos)//pos = 0, root
{
    Node *newnode = new Node();
    newnode -> val = x;
    newnode -> next = NULL;
    //node created

    if(pos == 0)
    {
        newnode ->next = root;
        root = newnode;
    }
    else
    {
        Node *currNode = root;
        for(int i=0;i<pos-1;i++)
        {
            if(currNode->next != NULL)
            {
                currNode = currNode->next;
            }
        }
        newnode->next = currNode->next;
        currNode ->next = newnode;
    }
    return root;
}

Node* SortedInsert(Node *root, int x)
{
    Node *newnode = new Node();
    newnode -> val = x;
    newnode -> next = NULL;
    //node created

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        Node *prevNode = NULL;
        Node *currNode = root;
        while(currNode != NULL)
        {
            if(currNode->val > x)
            {
                if(currNode == root)
                {
                    newnode ->next = currNode;
                    root = newnode;
                }
                else
                {
                    newnode ->next = currNode;
                    prevNode -> next = newnode;
                }
                return root;
            }
            else
            {
                prevNode = currNode;
                currNode = currNode->next;
            }
        }
        prevNode ->next = newnode;
    }
    return root;
}

Node* Delete(Node *root, int x)
{
    Node *currNode = root;
    Node *prevNode = NULL;

    while(currNode != NULL)
    {
        if(currNode->val == x)
        {
            if(currNode == root)
            {
                root = currNode->next;
                delete(currNode);
                currNode = root;
            }
            else
            {
                prevNode -> next = currNode ->next;
                delete(currNode);
                currNode = prevNode -> next;
            }
            // return root;
        }
        else
        {
            prevNode = currNode;
            currNode = currNode -> next;
        }
    }
    return root;
}

void Print(Node *root)
{
    Node *currNode = root;
    while(currNode != NULL)
    {
        cout<<currNode->val<<" ";
        currNode = currNode -> next;
    }
    cout<<endl;
}

int main()
{
    Node *root = NULL;
    root = SortedInsert(root,9);
    root = SortedInsert(root,5);
    root = SortedInsert(root,1);
    root = SortedInsert(root,10);
    root = SortedInsert(root,3);
    root = SortedInsert(root,9);
    Print(root);
    root = Delete(root,9);
    Print(root);
    root = Delete(root,1);
    Print(root);
    root = Delete(root,10);
    Print(root);
    root = Delete(root,3);
    Print(root);
}
