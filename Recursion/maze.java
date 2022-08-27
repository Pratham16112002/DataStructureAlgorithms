public class maze {
    public static int countPath(int i, int j, int n , int m){
        if(i==n || j ==m){
            return 0;
        }
        if(i==n-1 && j ==m-1){
            return 1;
        }
        //Move Down wards
        int downPath = countPath(i+1, j, n, m);
        // Move right paths
        int rightPath = countPath(i, j+1, n, m);

        // return the sum of both the paths
        return downPath + rightPath;
    }
    public static void main(String args[]){
            int n = 3 , m =3 ;
            System.out.println(countPath(0, 0, n, m));
    }
}
