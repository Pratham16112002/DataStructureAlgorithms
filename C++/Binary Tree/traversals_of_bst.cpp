#include<iostream>


using namespace std;

struct Node{
    int data ;
    struct Node* left ;
    struct Node* right ;
    Node(int val ){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

void pre_order(struct Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(struct Node* root)
{
    if(root==NULL){
        return ;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}

void post_order(struct  Node* root)
{
    if(root == NULL){
        return ;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    pre_order(root);
    return 0;
}