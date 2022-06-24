
		        String bin = sc.next();
		        int count_1 = 0 ;
		        int  count_0 = 0 ;
		        for(int i =  0 ; i<bin.length(); i++){
		            if(bin.charAt(i)=='1'){
		                count_1++;
		            }
		            else{
		                count_0++;
		        }
		       if(count_1>c