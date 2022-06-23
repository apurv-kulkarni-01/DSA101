#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* delete_begin(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else{
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node* delete_last(Node *head)
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL){
        delete(head);
        return NULL;
    }
    else{
        Node *temp = head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=NULL;
        return head;
    }
}

void traverse(Node *head){
    Node* curr = head;
    cout<<"Traversal begins..."<<endl;
    cout<<"..."<<endl;

    while(curr!=NULL)
    {
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = new Node(50);
    Node* second = new Node(10);
    Node* third = new Node(20);
    head->next = second;
    second->next = third;
    traverse(head);
    cout<<endl;
    head = delete_begin(head);
    traverse(head);
    cout<<endl;
    head = delete_last(head);
    traverse(head);
}