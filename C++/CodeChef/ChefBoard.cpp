#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    int no_of_squares = 0;
    for(int i = 1 ; i<=n ; i+=2 ){
        no_of_squares+=pow((n - i + 1),2);
        cout<<no_of_squares<<endl;
    }
    cout<<no_of_squares<<endl;
}   

int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}