public class GuestProb {
    public static int callGuest(int n){
        if(n<=1){
            return 1;
        }
        // single 
        int way_1 = callGuest(n-1);
        // Pair 
        int way_2 = (n-1)*callGuest(n-2);

        return way_1 + way_2;
    }
    public static void main(String args[]){
            int n = 4 ;
            System.out.println(callGuest(n));
    }
}
