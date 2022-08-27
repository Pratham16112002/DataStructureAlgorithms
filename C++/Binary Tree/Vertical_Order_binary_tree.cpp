#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i = a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

struct Node{
    int key;
    Node  *left , *right;

};

Node* newNode(int key){
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

void getVerticalOrder(Node* root , int hori_dis , map<int,vi> &m){
    if(root == NULL){
        return ;
    }
    m[hori_dis].push_back(root->key);
    getVerticalOrder(root->left, hori_dis-1 , m);
    getVerticalOrder(root->right, hori_dis + 1 , m);
}
signed main(){
    Node *root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);

    map<int,vector<int> > m ; 
    int hori_dis = 0;
    getVerticalOrder(root , hori_dis, m);

    map<int,vi> :: iterator it;
    vector<vector<int> > ans ;
    for(it = m.begin() ; it!=m.end() ; it++){
        vector<int> temp ;
        for(int i = 0 ; i<(it->ss).size(); i++){
            temp.push_back((it->ss)[i]);
        } 
        ans.push_back(temp);
    }
    for(int i = 0 ; i<ans.size() ; i++){
        for(int j = 0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j];
        }
    }

    return 0;
}