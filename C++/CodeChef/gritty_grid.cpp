#include<iostream>
#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int x , y , a , b;
    cin>>x>>y>>a>>b;
    x+=y -2 + a;
    a+=b;
    if(x%2 == 1 && a % 2 == 0){
        cout<<"No"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
    }

}

signed main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}