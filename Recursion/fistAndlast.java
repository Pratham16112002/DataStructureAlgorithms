public class fistAndlast {
    public static int first = -1 ;
    public static int last = -1;
    
    public static void fistLast(String str, int idx , char element ){
        if(idx==str.length()){
            System.out.println("The First Occurane is at index "  + first);
            System.out.println("The Last Occurance is at index " + last);
            return;
        }
        char currChar = str.charAt(idx);
        if(currChar==element){
            if(first==-1){
                first=idx;
            }
            else{
                last=idx;
            }
        }
        fistLast(str, idx+1, element);
    }
    public static void main(String args[]){
        String str = "Pratham";
        fistLast(str, 0 , 'a');

    }
}
