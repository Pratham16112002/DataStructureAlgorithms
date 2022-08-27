#include<iostream>

using namespace std;

int main(){
    int t ; 
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count_0 = 0;
        int count_1 = 0;
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i]=='1'){
                count_1++;
            }
            else if(s[i]=='0'){
                count_0++;
            }
        }
        if(count_0 <= (n/2)){
            for(int i = 0 ; i<count_1 ; i++){
                cout<<1;
            }
        }
        else {
            for(int i = 0 ; i<count_0 ; i++){
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}