import java.util.ArrayList;
import java.util.List;

public class Backtracking {
    public List<List<Integer>> CombinationSum(int [] candidates , int target){
        List<List<Integer>> comb = new ArrayList<>();
        generateCombination(0 , candidates , new ArrayList<>(), comb , target);
        return comb ;
    }
    void generateCombination(int start , int [] nums , List<Integer> current , List<List<Integer>> comb , int target){
        if(target  == 0){
            comb.add(new ArrayList<>(current));
        }
       if(target < 0){
        return ;
       }
        for(int i = 0 ; i<nums.length ; i++){
            current.add(nums[i]);
            generateCombination(i, nums, new ArrayList<>(), comb, target);
            current.remove(current.size() - 1);
        }
    }
    public static void main(String[] args) {
        
    }
}