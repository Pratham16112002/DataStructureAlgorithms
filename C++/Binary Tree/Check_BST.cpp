#include<iostream>
#include<bits/stdc++.h>


using namespace std;

struct Node
{
    int data;
    struct Node* left ;
    struct Node* right;
    Node(int val){
        int data = val ;
        left = NULL;
        right = NULL;
    }
};

// This method is the range method in which we will check the range of each node while traversing the binary tree and then return true and false accordingly 
bool Check_BST(Node* root , int min , int max){
        if(root == NULL){
            return true;
        }

        if(root->data < min || root->data > max){
            return false;
        }
        return (Check_BST(root->left , min , root->data -1 ) && (Check_BST(root->right , root->data -1 , max)));
}


//  This another method for checking bst or not

bool Check_BST2(Node* root)
{
    if(root!=NULL){
        if(!Check_BST2(root->left) !=NULL){
            return false;
        }
        if(prev != NULL && root->data <= prev->data){
            return false;
        }
        prev = root;
        return Check_BST2(root->right);
    }
    return true;
}
int main(){

    struct Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new  Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    if(Check_BST2(root)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}