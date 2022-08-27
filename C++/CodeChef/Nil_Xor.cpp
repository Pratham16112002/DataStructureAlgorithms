#include<iostream>
#define ll long long
#include<bits/stdc++.h>

using namespace std;
;

ll dp[55][2];
ll n , x ;

void solve(){
    ll n,x;
    cin>>n>>x;
    int count = 0;
    for(int i= 0 ; i<n ; i++){
        if((n^i)&x == 0){
            count++;
        }
    }
    cout<<count<<endl;
}

ll d_f_s(int india , int g){
    if(india < 0) return 1;
    if(dp[india][g] != -1) return dp[india][g];
    ll ans = 0 ;
    if(x >> india & 1){
        ans += d_f_s(india -1 , g);
    }
    else {
        if(n >> india & 1) {
            ans += d_f_s(india -1 , g);
            ans += d_f_s(india -1 , 0);
        }
        else {
            ans += d_f_s(india -1 , g);
            if(g == 0) ans += d_f_s(india -1 , g);
        }
    }
    return dp[india][g] = ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof dp);
        cin>>n >>x ;
        cout<< d_f_s(39,1) -1 <<endl;
    }
    return 0;
}