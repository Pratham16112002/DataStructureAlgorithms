#include<iostream>

using namespace std;


int main(){
    int t ;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        int tmp1 = 0 , tmp2 = 0;
        if(N%2==1){
            tmp1 = N -1;
        }
        else {
            tmp1 = N;
        }
        if(M%2 == 1){
            tmp2 = M -1;
        }
        else {
            tmp2 = M;
        }
        cout<< (N*M) - (tmp1 * tmp2)<<endl;
    }
}