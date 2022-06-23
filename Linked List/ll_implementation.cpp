#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int main()
{
    // Node head;
    // Node second;
    // head->data = 11;
    // head->p = second;
    // second->data = 21;
    // cout<<(head.data);

    cout<<"This is the first implementation"<<endl;
    Node* head = new Node(11);
    Node* second = new Node(21);
    Node* third = new Node(31);
    head->next = second;
    second->next = third;
    cout<<"Data in 2nd node->"<<second->data<<endl<<endl;

    // short implementation
    cout<<"This is the second implementation - short - "<<endl;
    Node* h = new Node(1);
    h->next = new Node(2);
    h->next->next = new Node(3);
    cout<<"Data in 3rd node->"<<h->next->next->data<<endl;
}
