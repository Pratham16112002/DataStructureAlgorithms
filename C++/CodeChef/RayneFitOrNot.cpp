#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;

void solve(){
    int n ;
    cin>>n;
    vector<long long int> score;
    for(int i = 0 ; i<n ; i++){
        int a;
        cin>>a;
        score.push_back(a);
    }
    long long int min_value = score[0];
    long long int max_ans = 0 ;
    for(int i = 0 ; i< n ; i++){
        max_ans = max(score[i]-min_value,max_ans);
        if(score[i] < min_value){
            min_value=score[i];
        }
    }
    if(max_ans>0){
        cout<<max_ans<<endl;
    }
    else {
        cout<<"UNFIT"<<endl;
    }
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}