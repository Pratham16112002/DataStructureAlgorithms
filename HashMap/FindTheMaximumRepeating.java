import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FindTheMaximumRepeating {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Map<Integer,Integer> mp = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if(mp.containsKey(arr[i])){
                mp.put(arr[i],mp.get(arr[i])+1);
            }
            else{
                mp.put(arr[i],1);
            }
        }
        int max_num = -1 , max_count=0; 
        for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
            if(max_count < entry.getValue()){
                max_num = entry.getKey();
                max_count=entry.getValue();
            }
        }
        System.out.println(n-max_count);
    }
}
