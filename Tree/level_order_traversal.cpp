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

// TC = O(n)   for finding the height 
int heightBT(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return(max(heightBT(root->left), heightBT(root->right))+1);
    }
}

// TC = O(n)      
void printAtK(Node* root, int k){
    if(root==NULL){
        return ;
    }
    else if(k==0){
        cout<<root->data<<" ";
    }
    else{
        printAtK(root->left, k-1);
        printAtK(root->right, k-1);
    }
}

// O(n+h*n)
// TC = O(h*n) 
void levelOrder(Node* root){
    
    cout<<"Finding the height of the binary tree: "<<endl;
    int height = heightBT(root);
    cout<<height<<endl;

    cout<<"Printing the tree in level order traversal: "<<endl;
    for(int i=0;i<height;i++){
        printAtK(root, i);
        cout<<endl;
    }
}



// better method using queue
// enque, deque ops on queue = O(1)
// TC = O(N)        N = no of nodes
// Aux Space = width of binary tree  = O(n) = ɵ(w)
void levelOrder_queue(Node* root){
    if(root==NULL){
        return;
    }
    
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    
}



int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    root->right->right = new Node(6);
    levelOrder(root);
    // levelOrder_queue(root);

}