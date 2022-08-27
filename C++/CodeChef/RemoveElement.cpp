#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ;i<n ; i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    sort(arr,arr+n);
    if(arr[0] + arr[n-1] <= k){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}