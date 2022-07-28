#include<bits/stdc++.h>
using namespace std;

struct DNode{
    int data;
    DNode* next;
    DNode* prev;
    DNode(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void traversal_dlist(DNode* head){
    DNode* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<"NULL";
}

DNode* insert_begin(DNode* head, int x){
    DNode* curr = new DNode(x);
    curr->next = head;
    if(head!=NULL)
        head->prev = curr;
    return curr;
}

int main(){
    DNode* head = new DNode(0);
    DNode* n1 = new DNode(2);
    DNode* n2 = new DNode(3);
    head->next = n1;
    n1->prev = head;

    n1->next = n2;
    n2->prev = n1;

    traversal_dlist(head);
    cout<<endl;
    cout<<endl;
    head = insert_begin(head, 101);
    traversal_dlist(head);
}