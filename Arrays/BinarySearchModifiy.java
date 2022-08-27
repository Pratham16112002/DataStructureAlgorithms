import java.util.Scanner;
import java.lang.Boolean;


public class BinarySearchModifiy {
    public static boolean check(long mid , long n ){
        return ((mid*(mid+1))/2)<=n;
    }

    public static void binaryModified(){
        Scanner sc = new Scanner(System.in);
        long n , ans=-1;
        n=sc.nextLong();
        long l , r ;
        l = 1 ;
        r = Long.MAX_VALUE;
        while(l<=r){
            long mid = l + (r-l)/2;
            if(check(mid,n)){
                ans=Math.max(ans,mid);
                l=mid+1;
            }
            else{
                r=mid-1;
            }

        }
        System.out.println(ans);

    }
    public static void main(String args[]){
            try {
                Scanner sc = new Scanner(System.in);
                int t = sc.nextInt();
                while (t > 0) {

                    binaryModified();
                    t--;
                }
            } catch (Exception e) {
                //TODO: handle exception
            }
           
    }
}
