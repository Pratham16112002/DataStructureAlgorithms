import java.util.Scanner;
import java.lang.*;

public class SubArray2GivenSum{
    public static boolean isSorted(int [] arr,int start, int end){
        // base case
        if (arr == null || end <= 1) {
            return true;
        }

        for (int i = start; i < end - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }

        return true;
    }
    public static boolean CheckSumArray(int [] arr , int n,int sum){
        int currentSum, i, j;
                for (i = 0; i < n; i++) {
                    currentSum = arr[i];
                    for (j = i + 1; j <= n; j++) {
                        if (currentSum <= sum && (Math.abs(i-j))>1 ) {
                            if(isSorted(arr, j-1, n-1)){
                                return true;
                            }
                        }
                        if (currentSum > sum || j == n)
                            break;
                        currentSum = currentSum + arr[j];
                    }
                }
                return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int n = sc.nextInt();
            int sum = sc.nextInt();
            int arr [] = new int[n];
            for(int i = 0 ; i<n ; i++){
                arr[i]=sc.nextInt();
            }
            if(isSorted(arr,0,n)){
                System.out.println("YES");
            }
            else{
                if(CheckSumArray(arr,n,sum)){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
           
            t--;
        }
    }
}