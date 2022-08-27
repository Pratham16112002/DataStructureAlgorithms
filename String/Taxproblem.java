import java.util.*;

public class Taxproblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		    int t = sc.nextInt();
		    while(t>0){
		        int N = sc.nextInt();
		        int X = sc.nextInt();
		        int Y = sc.nextInt();
		        String bin = sc.next();
		        int count_1 = 0;
		        int count_0 = 0;
		        for (int i = 0 ; i< N  ; i++ ){
		            if(bin.charAt(i)=='1'){
                        count_1++;
                    }
                    else{
                        count_0++;
                    }
		        }
		        if(count_0!=0 && count_1!=0) {
		            System.out.println(Math.min(X,Y));
		        }
		        else{
		            System.out.println(0);
		        }
		        t--;
		    }
    }
}
