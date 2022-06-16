public class RemoveDup {
    public static boolean[] map = new boolean[26];
    public static void RemoveDup2(String str, int idx, String newstr){
        if(idx==str.length()){
            System.out.println(newstr);
            return;
        }
        char currChar = str.charAt(idx);
        if(map[currChar - 'a'] ) {
            RemoveDup2(str, idx+1, newstr);
        }
        else{
            newstr+=currChar;
            map[currChar-'a']=true;
            RemoveDup2(str, idx+1, newstr);
        }
    }
    public static void main(String args[]){
        String str = "abbccda";
        RemoveDup2(str,0,"");
    }
}
