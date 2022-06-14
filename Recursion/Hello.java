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
    public static void main(String args[]){
        sumofN(1,10,0);
        System.out.println(fact(5));
        int a = 0 , b = 1 ;
        System.out.println(a);
        System.out.println(b);
        fibo(a, b, 7);
    }
}
