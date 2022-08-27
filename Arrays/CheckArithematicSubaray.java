import java.util.Arrays;

public class CheckArithematicSubaray {
    public static int ArithematicSubarray = 0;
    public static boolean ArithematicSubarray(int arr []){
            Arrays.sort(arr);
            if(arr.length==1 || arr.length <= 2){
                return false;
            }
            int d = arr[1] - arr[0];
            for (int i = 2; i < arr.length ; i++){
                if (arr[i] - arr[i - 1] != d){
                    return false;
                }
            }
            return true;
    }
    public static void printPlease(int arr[], int s, int e) {
        int [] ans = new int[e-s+1];
        int count = 0;
        for (int i = s; i <= e; i++) {
            ans[count]=arr[i];
            count++;
        }
       if(ArithematicSubarray(ans)){
            ArithematicSubarray++;
       }
    }

    public static void printSubArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                printPlease(arr, i, j);
            }
        }
    }

    public static void main(String args[]) {
        int arr[] = { 1, 2, 3, 4 };
        printSubArray(arr, 4);
        System.out.println(ArithematicSubarray);
    }
}
