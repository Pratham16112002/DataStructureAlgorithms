#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ; 
    cin>>n;
    vector<int> test_case ;
    for(int i = 0 ; i<n ; i++){
        int a;
        cin>>a;
        test_case.push_back(a);
    }
    string pass_fail;
    cin>>pass_fail;
    vector<int> help ;
    for (int i = 0; i < n; i++)
    {
        if(pass_fail[i] == '0'){
            help.push_back(test_case[i]);
        }
    }
    
    cout<<*min_element(help.begin(),help.end())<<endl;
}



int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}