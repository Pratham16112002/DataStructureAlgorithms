import java.util.Scanner;


public class table_tenis {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
		    int t = sc.nextInt();
		    while(t>0){
		        String bin = sc.next();
		        int count_1 = 0 ;
		        int  count_0 = 0 ;
		        for(int i =  0 ; i<bin.length(); i++){
		            if(bin.charAt(i)=='1'){
		                count_1++;
		            }
		            else{
		                count_0++;
		        }  
		    }
            if (count_1 >= count_0) {
                System.out.println("WIN");
            } else {
                System.out.println("LOSE");
            }
		     t--;
		}
    }
}   
