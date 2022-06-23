#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
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

Node* insert_begin(Node* head, int x){
    Node *curr = new Node(x);
    curr->next = head;
    return curr;
}

Node* insert_end(Node* head, int x){
    Node *temp = new Node(x);
    if(head==NULL)
        return temp;
    Node *curr = head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next = temp;
    return head;
}

Node* insert_at(Node *head, int x, int pos){
    Node *temp = new Node(x);
    if(pos==1){
        return(insert_begin(head, x));
    }
    
    Node *curr = head;
    int i=1;
    while(i<=(pos-2) && curr!=NULL)
    {
        curr=curr->next;
        i++;
    }
    if(curr==NULL)
        return head;
    else{
        temp->next = curr->next;
        curr->next=temp;
        return head;
    }
}

int main(){
    Node* h = new Node(1);
    h->next = new Node(2);
    h->next->next = new Node(3);
    h = insert_begin(h, 0);
    traverse(h);
    cout<<endl;
    insert_end(h, 4);
    traverse(h);
    cout<<endl;
    h = insert_at(h, 99,1);
    traverse(h);

}