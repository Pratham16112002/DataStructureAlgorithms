#include<iostream>
#include<stack>

using namespace std;


struct Node {
    int data ; 
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left= NULL;
        right= NULL;
        //The left and right are the child node and will be initialized to null
    }
};

void zigzapTraversal(Node* root) {

    if(root==NULL){
        return ;
    }

    stack<Node*> currentLevel ; 
    stack<Node*> nextLevel ;

    bool leftToRight = true;

    currentLevel.push(root);

    while(!currentLevel.empty()){
        Node* temp = currentLevel.top();
        currentLevel.pop();

        if(temp) {
            cout << temp-> data << " ";
        if(leftToRight) {
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
        else { //For right to left 
         if(temp->right){
            nextLevel.push(temp->right);
         }
         if(temp->left){
            nextLevel.push(temp->left);
         }
            
          }
        }
        if(currentLevel.empty()){
            leftToRight = !leftToRight;
            swap(currentLevel,nextLevel);
        }

    }

}

int main(){

    struct Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->right->right = new Node(10);
    zigzapTraversal(root);
    cout<<endl;
    return 0;
}