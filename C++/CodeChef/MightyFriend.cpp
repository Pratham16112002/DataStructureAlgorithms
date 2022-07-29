#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;


void solve(){
    int n , k ;
    cin>>n>>k;
    vector<int> one, two;
    int sum = 0;
    for(int i = 0 ; i<n  ; i++){
        int element ; 
        cin>>element;
        sum+=element;

        if(i%2 == 0){
            one.push_back(element);
        }
        else {
            two.push_back(element);
        }
    }

    sort(one.begin(),one.end(),greater<int>());
    sort(two.begin(),two.end(),greater<int>());
    int moves = n/2;
    int i = 0 , j = 0 , sum2= 0;
    while(k && moves > 0){
        if(one[i] > two[j]){
            sum2 += one[i];
            i++;
            k--;
        }
        else {
            sum2+=two[j];
            j++;
        }
        moves-=1;
    }
    while(moves > 0){
        sum2+=two[j++];
        moves-=1;
    }
    if(sum2 > sum - sum2){
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