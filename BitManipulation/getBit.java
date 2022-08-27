public class getBit {
    public static int clearBit(int n , int pos){
        int bitmask = 1<<pos;
        int Not_bitmask = ~(bitmask);
        return Not_bitmask & n;
    }
    public static int setBit(int n, int pos){
        int bitmask = 1<<pos;
        return bitmask | n;
    }
    public static void getBit(int n , int pos){
        int bitmask = 1<<pos;
        if((bitmask & n) == 0 ){
            System.out.println("The bit was zero ");
        }
        else{
            System.out.println("The bit was one ");
        }
    }
    public static void main(String args[]){
        int n = 5 ;
        int pos = 2; 
        // getBit(n,pos);
        System.out.println(setBit(n, pos));
        System.out.println(clearBit(n, pos));
    }
    
}
