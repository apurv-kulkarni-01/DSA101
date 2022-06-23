#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next=NULL;
    }
};

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

void recursive_traverse(Node *curr)
{
    if(curr==NULL)
        return ;
    cout<<curr->data<<"->";
    recursive_traverse(curr->next);

}

int main(){
    Node* head = new Node(55);
    Node* second = new Node(46);
    Node* third = new Node(75);
    head->next = second;
    second->next = third;
    third->next = new Node(12);
    cout<<endl;
    traverse(head);
    cout<<endl<<endl;


    cout<<endl;
    cout<<"Recursive Traversal begins..."<<endl;
    cout<<"..."<<endl; 
    recursive_traverse(head);
    cout<<"NULL";
    cout<<endl<<endl;
}