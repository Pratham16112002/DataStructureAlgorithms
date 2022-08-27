import java.util.Scanner;
import java.lang.String;

public class Snakeproc {
        public static boolean checkSnake(String str ){
            String new_str = str.replace(".", "");
            System.out.println(new_str);
            if(new_str.charAt(0)=='T'){
                return false;
            }
            for(int i = 0 ; i<new_str.length() ; i++){
                if(new_str.charAt(i)==new_str.charAt(i+1)){
                    return false;
                }
            }
            return true;
        }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            String str = sc.next();
            if(checkSnake(str)){
                System.out.println("valid");
            }
            else{
                System.out.println("invalid");
            }
            t--;
        }
    }

       
    }
