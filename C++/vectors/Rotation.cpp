#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rotate(vector <int> & hello , int k){
    if(k==0){
        return;
    }
    for(int i = 0 ; i< k ; i++){
        hello.push_back(hello[0]);
        hello.erase(hello.begin());
    }

    for(int i = 0 ; i< hello.size() ; i++){
        cout<<hello[i]<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t){
        int n,k;
        cin>>n>>k;
        vector<int> hello;
        for(int i = 0 ; i<n ; i++){
            int a;
            cin>>a;
            hello.push_back(a);
        }
        rotate(hello,k%n);
        t--;
    }
    return 0;
}