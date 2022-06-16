public class Hello {
    public static int fact(int n){
        if(n==1)return 1;
        return n*fact(n-1);
    }
    public static void fibo(int a , int b ,int n ){
        if(n==0)return;
        int c = a + b;
        System.out.println(c);
        fibo(b, c, n-1);
    }
    public static  void sumofN(int i , int n , int sum){
        if(i==n){
            sum+=i;
            System.out.println(sum);
            return;
        }
         sum += i ;
         sumofN(i+1, n, sum);
         System.out.println(i);
    }
    public static int calPwr(int x , int n  ){
        if(n==0){ //Base case one when the power is zero it will return 0.
            return 1;
        }
        if(x==0){  //Base case two when the base is zero then the answer will always be 0.
            return 0;
        }
        int xPow1  = calPwr(x, n-1);
        int xPow = x * xPow1;
        return xPow;
    }
    public static int calPwr2(int x , int n ){
        if(n==0){ //Base case one when the power is zero it will return 0.
            return 1;
        }
        if(x==0){  //Base case two when the base is zero then the answer will always be 0.
            return 0;
        }
        if(n%2==0){ // If n is even 
           return calPwr2(x, n/2) * calPwr2(x, n/2);
        }
        else{ // If n is odd
           return  calPwr2(x, n/2) * calPwr2(x, n/2) * x;
        }

    }
    public static void main(String args[]){
        // sumofN(1,10,0);
        // System.out.println(fact(5));
        // int a = 0 , b = 1 ;
        // System.out.println(a);
        // System.out.println(b);
        // fibo(a, b, 7);
        System.out.println(calPwr2(2, 5));
    }
}
