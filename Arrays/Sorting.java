public class Sorting {
    public static void printArray(int arr[]){
        for(int i = 0 ; i<arr.length  ; i++ ){
            System.out.print(arr[i]+" ");
        }
    }
    public static void bubbleSort(int arr[]){
        for(int i=0 ; i<arr.length-1 ; i++){
            for(int j = 0 ; j<arr.length-i-1 ; j++ ){
                if(arr[j]>arr[j+1]){
                    // Swap the Elements
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static void main(String args[]){
        int arr[] = {7,8,3,1,2};
        // Calling the bubble sort function 
        bubbleSort(arr);
        // Calling the print function 
        printArray(arr);
        
    }
}
