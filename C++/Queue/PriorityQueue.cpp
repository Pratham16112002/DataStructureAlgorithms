#include<iostream>
#include<queue>
#include <bits/stdc++.h>

using namespace std;
int K_largest(int a[] , int k, int n){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0 ; i<k ; i++){
        pq.push(a[i]);
    }
    for(int i = k ; i<n ; i++){
            if(pq.top() < a[i]){
                pq.pop();
                pq.push(a[i]);
            }       
    }
    return pq.top();
}

int K_smallest(int a[] ,int k , int n ){
    priority_queue<int> pq;
    for(int i = 0 ; i<k ; i++){
        pq.push(a[i]);
    }
    for(int i = k ; i<n ; i++){
        if(pq.top() > a[i]){
            pq.pop();
            pq.push(a[i]);
        }
    }
    return pq.top();
}
int main(){
    int a[6] = {20,10,60,30,50,40};
    int k = 3;
    cout<<K_largest(a,k,6)<<endl;
    cout<<K_smallest(a,k,6)<<endl;
    return 0;
}