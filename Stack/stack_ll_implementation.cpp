#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Stack{
    Node *head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop(){
        if(head==NULL){
            return INT_MAX;
        }
        int poped = head->data;
        Node *temp = head;
        head=head->next;
        delete(temp);
        size--;
        return(poped);
    }
    bool isEmpty(){
        return(head==NULL);
    }
    int peek(){
        if(head==NULL){
            return INT_MAX;
        }
        return(head->data);
    }
    int len(){
        return(size);
    }
};

int main(){
    Stack s;
    cout<<s.isEmpty()<<endl;
    cout<<s.len()<<endl;
    cout<<"Pushing 50"<<endl;
    cout<<"Pushing 100"<<endl;
    s.push(50);
    s.push(100);
    cout<<s.isEmpty()<<endl;
    cout<<s.len()<<endl;
    cout<<s.peek()<<endl;


}
