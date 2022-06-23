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

void insert_begin(Node* head, int x){
    Node *curr = new Node(x);
    curr->next = head;
    head = curr;
}

int main(){
    Node* h = new Node(1);
    h->next = new Node(2);
    h->next->next = new Node(3);
    insert_begin(h, 0);
}