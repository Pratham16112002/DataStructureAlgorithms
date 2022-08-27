#include<iostream>

#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n ;
    cin>>n;
    vector<int> freq(n+1, 0) ;
    for(int i = 0 ;i<n ; i++)
    {
        int a ;
        cin>>a;
        freq[a]++;
    }
    sort(freq.rbegin(), freq.rend());
    int pos1 =  (freq[0]+1)/2; // To handle the case if the max freq of the element is an odd number 
    int pos2 =  freq[1];
    cout<< max(pos1,pos2)<<endl;
}

int64_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}