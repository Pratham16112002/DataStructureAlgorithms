public class Matrix {
    public static void main(String[] args) {
        int grid[][]={{5,0,0,1},{0,4,1,5},{0,5,2,0},{4,1,0,2}};
         int size = grid.length;
         System.out.println(size);
        int i , j ;
        for(i = 0 ; i<size ; i++){
            for( j = 0 ; j<size ; j++){
                if(i==j || (i+j)==size-1){
                    if(grid[i][j]==0){
                        System.out.println("Hello");
                    }
                }
            }
        }
        System.out.println("NO");
    }
}
