import java.util.Scanner;

public class Random {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int s = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            int total_memory = x+y;
            if(( s -  total_memory)>z){
                System.out.println(0);
            }
            else{
                if((s-total_memory)==z){
                    System.out.println(2);
                }
                else {
                    if((s-total_memory-z+x)>0 || (s-total_memory-z+y)>0){
                        System.out.println(1);
                    }
                    else{
                        System.out.println(0);
                    }
                }
            }
        }
    }
}
