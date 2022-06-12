package Code1.Arrays;

 public class AllSort {
    public static void printArray(int arr[]){
        for(int i = 0 ; i<arr.length  ; i++ ){
            System.out.print(arr[i]);
        }
    }
    public static void bubbleSort(int arr[]){
        for(int i=0 ; i<arr.length ; i++){
            for(int j = 0 ; j<arr.length -i -1 ; j++ ){
                if(arr[j]<arr[j+1]){
                    // Swap the Elements
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static void main(String args[]){
        int arr[] = {7,8,1,2,1,2};
        // Calling the bubble sort function 
        bubbleSort(arr);
        
    }

}
