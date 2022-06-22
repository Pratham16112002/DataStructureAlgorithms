import java.util.Scanner;

public class matchSticks {
    public static int [] arr = {6,2,5,5,4,5,6,3,7,6};

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>=0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int sum = a + b;
            int matchSticks_count = 0;
            while(sum>0){
                int lastdigit = sum%10;
                for(int i = 0 ; i<arr.length ; i++){
                    if(lastdigit==i){
                        matchSticks_count+=arr[i];
                    }
                }
                sum=sum/10;
            }
            System.out.println(matchSticks_count);
            t--;
        }
    }
    
}
