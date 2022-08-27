import java.util.HashSet;

import javax.swing.text.DefaultStyledDocument.ElementSpec;

public class Subseq {
    public static void subseqUnique(String str , int idx , String newString , HashSet<String> set){
       if(idx==str.length()){
        if(set.contains(newString)){
            return;
        }
        else{
            System.out.println(newString);
            set.add(newString);
            return;
        }
       }
       char currChar = str.charAt(idx);
       subseqUnique(str, idx+1, newString+currChar, set);
       subseqUnique(str, idx+1, newString, set);
    }
    public static void subseq(String str , int idx , String newString ){
        if(idx == str.length()){
            System.out.println(newString);
            return;
        }
        char currChar = str.charAt(idx);
        //  To add current String
        subseq(str, idx + 1, newString+currChar);
        // Not to add current String
        subseq(str, idx + 1, newString);
    }
    public static void main(String args[]){
        String str = "aaa";
        HashSet<String> set = new HashSet<>();
        // subseq(str, 0, "" );
        subseqUnique(str,0,"",set);
    }
}
