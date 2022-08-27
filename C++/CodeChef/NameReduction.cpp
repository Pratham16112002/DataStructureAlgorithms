#include<iostream>
#include<bits/stdc++.h>

using namespace std; 


int main(){
    int t;
    cin>>t;
    while(t--){
        int count[26]{0};
        string a , b;
        cin>>a>>b;
        for(int i = 0 ; i<a.length() ; i++){
            count[a[i] - 97]++;
        }
        for(int j = 0 ; j<b.length() ; j++ ){
            count[b[j] -97]++;
        }
        bool flag = true;
        int n;
        cin>>n;
        for(int i = 1 ; i<=n ; i++){
            string c ;
            cin>>c;
            for(int j = 0 ; j<c.length() ; j++){
                if(count[c[j]-97] > 0){
                    count[c[j]-97]--;
                }
                else {
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}