public class Subarrays {
    public static void printPlease(int arr[] , int s , int e){
        for(int i = s ; i<= e ; i++){
            System.out.print(arr[i]);
        }
        System.out.println();
    }
    public static void printSubArray(int arr [] , int n){
        for(int  i = 0 ; i<n ; i++){
            for(int j = i ; j<n ; j++){
                printPlease(arr,i,j);
            }
        }
    }
    public static void main(String args[]){
        int arr [] = {1,2,3,4,5};
        printSubArray(arr,5);
    }
}
