import java.util.ArrayList;

public class Subset {
    public static void prinSubset(ArrayList<Integer> subset){
        for(int i = 0 ; i< subset.size() ; i++){
            System.out.print(subset.get(i)+" ");
        }
        return;
    }
    public static void findSets(int n , ArrayList<Integer> subset){
        if(n==0){
            prinSubset(subset);
            return;
        }

        // add Hoga 
        subset.add(n);
        findSets(n-1, subset);
        // add nahi hoga
        subset.remove(subset.size()-1);
        findSets(n-1, subset);
    }
    public static void main(String args[]){
        int n = 3 ;
        ArrayList<Integer> subset = new ArrayList<>();
        findSets(n, subset);
    }    
}
