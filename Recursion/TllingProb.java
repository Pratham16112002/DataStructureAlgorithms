

public class TllingProb {
    public static int placeTiles(int n , int m){
        if(n==m){

            return 2;
        }
        if(n<m){
            return 1;
        }
        // verticallly 
        int verticalPlacements = placeTiles(n-m, m);
        // horizontally
        int horizontalPlacements = placeTiles(n-1, m);
        return verticalPlacements + horizontalPlacements;
    }
    public static void main(String args[]){
        int n = 3 , m = 3;
        System.out.println(placeTiles(n, m));
    }
}
