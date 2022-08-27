#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int freq_max(vector<int> &a , int n ){
    sort(a.begin(), a.end());
    int max_frequency = -1 ;
    int i = 0 ;
    while(i<n){
        int countFreq = 1 ;
        while(i+1 < n  && a[i] == a[i+1]){
            countFreq++;
            i++;
        }
        if(max_frequency < countFreq){
            max_frequency = countFreq;
        }
    }
    return max_frequency;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        int max_freq = freq_max(a,n);
        cout<<(n-max_freq)<<endl;
    }

    return 0;
}