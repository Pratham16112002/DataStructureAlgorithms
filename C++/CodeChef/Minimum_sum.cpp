#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long 
using namespace std;

int helper(int m , int n ){
    if (n == 0){
        return m;
    }
    return helper(n, m%n);
}
void solve(){
    ll n , p , t ; 
    cin>>n>>p;
    for(int i = 1 ; i<n ; i++){
        cin>>t ; 
        p = helper(p,t);
    }
    cout<< p*n <<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}