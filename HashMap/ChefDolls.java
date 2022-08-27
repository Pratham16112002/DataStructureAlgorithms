import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ChefDolls {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int n = sc.nextInt();
            HashMap<Integer,Integer> freq = new HashMap<>();
            for(int i = 0 ; i<n ; i++){
                int type=sc.nextInt();
                if(freq.get(type)==null){
                    freq.put(type,1);
                    continue;
                }
                freq.put(type,freq.get(type) +1 );
            }
            for(Map.Entry m : freq.entrySet()){
                System.out.println(m.getKey() + " " + m.getValue()
                );
            }
            for(Map.Entry m : freq.entrySet()){
                int ans =(int) m.getValue();
                if(ans%2!=0){
                    System.out.println(m.getKey());
                }
            }
            t--;
        }
    }
}
