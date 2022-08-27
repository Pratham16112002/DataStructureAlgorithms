//  Not working in  c++ trying in java but will try in c++ some other time .

#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int minCoins(vector<int> &coins, int amount)
{
    int n = coins.size();
    int dp[amount + 1];
    fill(dp, dp + amount + 1, -1);
    dp[0] = 0;
    if (amount == 0)
    {
        return 0;
    }
    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        if (n - coins[i] >= 0)
        {
            int subAns = 0;
            if (dp[amount - coins[i]] != -1)
            {
                subAns = dp[amount - coins[i]];
            }
            else
            {
                subAns = minCoins(coins, n - coins[i]);
            }
            if (subAns != INT32_MAX && subAns + 1 < ans)
            {
                ans = subAns + 1;
            }
        }
    }

    return dp[amount] = ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }
    cout << "Enter the amount \n";
    int amount;
    cin >> amount;
    cout<<minCoins(a, amount)<<endl;
    return 0;
}