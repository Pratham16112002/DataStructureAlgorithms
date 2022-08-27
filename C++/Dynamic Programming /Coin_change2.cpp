#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


int dp[310][10010];

int func(int index ,int amount , vector<int>& coins){
    if(amount == 0){
        return 1;
    }
    if(index < 0) {
        return 0;
    }
    if(dp[index][amount]!=-1) return dp[index][amount];
    int ways = 0 ;
    for(int coin_amount = 0 ; coin_amount <=amount ; coin_amount+=coins[index]) {
        ways +=func(index-1, amount- coin_amount , coins);
    } 

    return dp[index][amount] = ways;
}

int change(vector<int>& coins , int amount ){
    memset(dp,-1,sizeof(dp));
    int ans = func(coins.size() -1 , amount , coins);
    return ans ;
}


int main(){
    return 0;
}