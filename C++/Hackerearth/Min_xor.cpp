#include<bits/stdc++.h>


using namespace std;


int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int cost = INT_MAX;
    int XOR = 0;
    for(int i = 0 ; i<n ; i++){
        XOR ^= arr[i];
    }
    for(int i= 0 ; i<n ; i++){
        if(cost > abs((XOR ^ arr[i]) - arr[i])){
            cost = abs((XOR ^ arr[i]) - arr[i]);
        }
    }
    cout<<abs(cost)<<endl;
    return 0;
}