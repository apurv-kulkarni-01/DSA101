# include <bits/stdc++.h>

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

// Node* insert(Node* main_root, int x){
//     Node* root = main_root;
//     if(root==NULL){
//         root = new Node(x);
//         return root;
//     }
//     else if(root!=NULL){
//         while(root!=NULL && root->data!=x){
//             if(root->data > x){
//                 root = root->left;
//             }
//             else if(root->data < x){
//                 root = root->right;
//             }
//         }
//         if(root->data==x){
//             cout<<"Node already exist."<<endl;
//             return main_root;
//         }
//         else if(root==NULL){
//             root = new Node(x);
//             cout<<"Node inserted."<<endl;
//             return main_root;
//         }
//     }
// }

Node * insert(Node* root, int x){
    Node* temp = new Node(x);
    Node* parent = NULL, *curr = root;
    while(curr!=NULL){
        parent = curr;
        if(curr->data > x){
            curr = curr->left;
        }
        else if(curr->data < x){
            curr = curr->right;
        }
        else{
            return root;
        }
    }
    if(parent==NULL){
        return temp;
    }
    if(parent->data > x){
        parent->left = temp;
    }
    if(parent->data < x){
        parent->right = temp;
    }
    return root;
}

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->right = new Node(18);
    root->right->left = new Node(12);
    // int nsrt;
    // cin>>nsrt;
    root = insert(root,2);
    inorder(root);
}