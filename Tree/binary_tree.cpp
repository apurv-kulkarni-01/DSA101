#include<bits/stdc++.h>
using namespace std;

// traversal = printing every node in the tree exactly once.
// 2 types of traversals BFS and DFS
// DFS has 3 types INORDER(l, root, r), PREORDER(root, l, r), POSTORDER(l, r, root)


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

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
}