#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool search(Node* root, int x){
    if(root==NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        search(root->left,x);
    }
    else if(root->data < x){
        search(root->right,x);
    }
}

bool itr_search(Node* root, int x){
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data > x){
            root=root->left;
        }
        else if(root->data < x){
            root=root->right;
        }
    }
    return false;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->right = new Node(18);
    root->right->left = new Node(12);
    cout<<itr_search(root, 15);
}