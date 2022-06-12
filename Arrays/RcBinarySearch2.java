import java.util.Scanner;


public class RcBinarySearch2 {
    public static boolean binarySearch(int marks[] , int low , int high , int key) {
		while(low<=high && low<=marks.length -1 ) {
			int mid=low + ( high - low)/2;
			if(key==marks[mid])return true;
			if(key<marks[mid])return binarySearch(marks,low,mid-1,key);
			return binarySearch(marks,mid+1,high,key);
			
		}
		return false;		
	}
	public static void main(String args[]) {
//		Take an input from the user and search and search for a specific element in it 
		Scanner sc = new Scanner(System.in);
				 
		int[] marks = new int[10];
		for(int i = 0 ; i<3 ; i++) {
			marks[i]=sc.nextInt();
		}
		System.out.println("Enter the element you want to find ?");
		int x = sc.nextInt();
		System.out.println(binarySearch(marks,0,2,x));
		
	}
}
