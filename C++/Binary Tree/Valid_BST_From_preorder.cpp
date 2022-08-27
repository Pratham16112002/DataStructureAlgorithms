// First we will try solving the question with the normal stack approach 
#include<vector>
#include<iostream>
#include<stack>
#include<bits/stdc++.h>

using namespace std;

bool checkBSt(vector<int> &bst){
    stack<int> st ;
    int root = INT_MIN;
    for(int i = 0 ; i<bst.size() -1 ; i++){
        while(!st.empty() && bst[i] > st.top()){
            root = st.top();
            st.pop();
        }
        if(bst[i] < root){
            return false;
        }
        st.push(bst[i]);
    }
    return true;
}

int main(){
    vector<int> pre_Order_bst  = {44,22,55};
    if(checkBSt(pre_Order_bst)){
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
    }
    
    return 0;
}