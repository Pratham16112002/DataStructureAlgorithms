#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


void solve(){
    int n ;
    cin>>n;
    vector<pair<int,int>> time ;
    for(int i = 0 ; i<n ; i++){
        int arrivalTime ;
        cin>>arrivalTime;
        time.push_back({arrivalTime,1});
    }
    for(int i = 0 ; i<n ; i++){
        int DepartTime ;
        cin>>DepartTime;
        time.push_back({DepartTime,0});
    }

    sort(time.begin(),time.end());
    int ans = 0 , count = 0;
    for(pair<int,int> i : time){
        if(i.second == 1){
            count+=1;
        }
        else {
            count -=1;
        }
        ans = max(count,ans);
    }
    cout<<ans<<endl;
}
int main(){
    int t ; 
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}