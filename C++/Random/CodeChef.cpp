#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t ;
    cin>>t;
    while(t--){
        double x , y;
        cin>>x>>y;
       int d=x-y;
       if(d<=0){
        cout<<"0"<<endl;
       }
       else if(d%4==0){
        cout<<d/4<<endl;
       }
       else{
        cout<<d/4 + 1 <<endl;
       }
        
    }
    return 0;
}