#include <iostream>
#include <cstring>

using namespace std;

int solve(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();

    int dp[m+1][n+1];
    

    for(int i= 0 ; i<=m ; i++) dp[i][0] = i;
    for(int j = 0 ; j<=n ; j++) dp[0][j] = j;

    for(int i = i ; i<= m ; i++){
        for(int j = 1 ; j<=n ; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                dp[i][j] = 1 + min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string text1, text2;
    cin >> text1 >> text2;
    solve(text1, text2);
    return 0;
}