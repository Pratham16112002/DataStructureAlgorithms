#include<iostream>

using namespace std;

void helper(){
    int n , a , b , count_1= 0, count_2 = 0 ;
    cin>>n>>a>>b;
    int s[n];
    for(int i = 0 ; i<n ; i++){
        cin>>s[i];
        if(s[i]%a==0){
            count_1++;
        }
        else if(s[i]%b==0){
            count_2++;
        }
    } 
    if(count_1>count_2){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
}