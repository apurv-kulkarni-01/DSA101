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

// T.C. = wc = THETA(n)
// T.C. = general = O(n)

// A.S. = wc = THETA(h)
// A.S. = general = O(h)

void atK(Node* root, int k){
    if(root==NULL){return;}
    // if(k==0){
    //     cout<<root->data<<" ";
    // }
    if(root!=NULL){
        if(k!=0){
            atK(root->left, k-1);
            atK(root->right, k-1);
        }
        if(k==0){
            cout<<root->data<<" ";
        }
    }
}

int main(){
    // Node* root = new Node(10);
    // root->left = new Node(20);
    // root->left->left = new Node(30);

    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    atK(root,2);
}

