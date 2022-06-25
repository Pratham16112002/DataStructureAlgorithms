import java.util.Scanner;

public class Random {
    public static void main(String[] args) {
             Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int row = sc.nextInt();
            int col = sc.nextInt();
            if(row > col ){
                int Dif = col + 1 , res = 1;
                for(int i = 1; i<=row ; i++){
                    for(int j = 1  ; j<=col ; j++){
                        System.out.print(res+Dif*(j-1) + " ");
                    }
                    System.out.println();
                    res++;
                    Dif++;
                }
            }
                else{
                    int Dif=row + 1 , ans = 1 , bs = 1;
                    for(int i = 1 ; i<=row ; i++ ){
                        for(int j = 1 ; j<=col ; j++){
                            System.out.print(ans+bs*(j-1)+" ");
                        }
                        System.out.println();
                        ans+=Dif; 
                        bs++;
                    }
                }
            t--;
            
        }
} 


    }
