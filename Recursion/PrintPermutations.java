public class PrintPermutations {
    public static void permu(String str, String perm){
        if(str.length()==0){ // Base Case
            System.out.println(perm);
            return;
        }
        for(int i = 0 ; i<str.length() ; i++){
            char currChar = str.charAt(i);
            String newStr = str.substring(0, i) + str.substring(i+1);
            permu(newStr, perm+currChar);
        }
    }
    public static void main(String args[]){
        String str = "abc";
        String perm = "";
        permu(str, perm);
    }
}
