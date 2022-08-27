public class Sorting {
    public static void printArray(int arr[]){
        for(int i = 0 ; i<arr.length  ; i++ ){
            System.out.print(arr[i]+" ");
        }
    }
    public static void bubbleSort(int arr[]){
        for(int i=0 ; i<arr.length-1 ; i++){ // n- 1 
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
    public static void SelectionSort(int arr[]){
        for(int i = 0 ; i<arr.length -1 ; i++){
            int smallest = i ; //Set the ith element as the samllest element 
            for( int j = i+1 ; j<arr.length ; j++){
                if(arr[smallest]>arr[j]){
                    smallest = j ;// If we found an element which is less then the ith the we set that element as the samllest one 
                }
            }
            // Swapping the smalleset element with the ith element 
            int temp = arr[smallest];
            arr[smallest]=arr[i];
            arr[i]=temp; 
        }
    }
    public static void InsertionSort(int arr[]){
        for(int i = 0 ; i<arr.length ; i++){
            int key = arr[i];
            int j = i-1; 
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    public static void main(String args[]){
        int arr[] = {7,8,3,1,2};
        // Calling the bubble sort function 
        InsertionSort(arr);
        // Calling the print function 
        printArray(arr);
        
    }
}
