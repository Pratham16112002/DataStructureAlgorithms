import java.util.HashMap;
import java.util.Scanner;

public class SnakeProcession {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            HashMap map = new HashMap<>();
            int n = sc.nextInt();
            String str = sc.next();
            int countH= 0;
            int countT=0;
            for(int i = 0 ; i<str.length() ; i++){
                if(str.charAt(i)=='H'){
                    map.put('H',++countH);
                }
                if(str.charAt(i)=='T'){
                    map.put('T',++countT);
                }
            }

            if(countH==countT){
                System.out.println("valid");
            }
            else{
                System.out.println("invalid");
            }
            t--;
        }
        // Wrong answer 
    }
}
