#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
    int t ; 
    cin>>t;
    while(t--){
        int x , y , z , a , p = 0;
        cin>>x>>y>>z;
        a = z%y;
        while(z > 0 && x > 0){
            if(z<y){
                p+=pow(a,2);
                break;
            }
            z-=y;
            p+=pow(y,2);
            x--;
        }
        cout<<p<<endl;
    }
    return 0;
}