import java.util.Arrays;

public class Coin_change {


    static int minCoins(int coins[] , int amount){
        int n = coins.length;
        int dp[] = new int[n+1];
        
    }
    public static void main(String[] args) {
        int n = 18;
        int a[] = { 7, 5, 1 };

        int dp[] = new int[n + 1];
        Arrays.fill(dp, -1);
        dp[0] = 0;

        int ans = minCoins(n, a, dp);
        System.out.println(ans);
    }
}