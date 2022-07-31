#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data = x;
        right=NULL;
        left=NULL;
    }
};

// recursive call
// T.C. = O(n)     n - number of nodes
// A.S. = O(h)     h - height of the tree 
    // worst case A.S. = h+1        null nodes are also executed

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return(max(height(root->left), height(root->right))+1);
    }
}

int main(){
    Node *root = new Node(55);
    root->left = new Node(75);
    root->right = new Node(31);
    root->right->left = new Node(2);
    root->right->right = new Node(0);
    cout<<height(root);
}
