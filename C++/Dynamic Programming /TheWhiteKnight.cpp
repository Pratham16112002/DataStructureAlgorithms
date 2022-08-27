#include<iostream>
#include<vector>
#include<bits/stdc++.h>
int dp[1000][1000];

using namespace std;
int max4(int a , int b , int c , int d){
    return max(max(a,b), max(c,d));
}
int helper(int i , int j , int n , vector<vector<char> > &a){
    if(i<0 || j<0 || i>= n || j>= n){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(a[i][j] == 'P'){
        return dp[i][j] = max4(1+helper(i+1,j+2,n,a),1+helper(i+2,j+1,n,a),1+helper(i-2,j+1,n,a),1+helper(i-1,j+2,n,a));
    }
    else {
        return dp[i][j] = max4(helper(i + 1, j + 2, n, a),helper(i + 2, j + 1, n, a),helper(i - 2, j + 1, n, a),helper(i - 1, j + 2, n, a));
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<vector<char> > a;
        int k_posi , k_posj;
        for(int i = 0 ; i<n ; i++){
            vector<char> temp;
            for(int j = 0 ; j<n ; j++){
                char x ;
                cin>>x;
                temp.push_back(x);
                dp[i][j] = -1;
                if(x == 'k'){
                    k_posi=i;
                    k_posj=j;
                }
            }
            a.push_back(temp);
        }

        cout<<helper(k_posi,k_posj,n,a)<<endl;

    }
    return 0;
}