#include<iostream>


using namespace std;

int power(long long x , unsigned int n , int mod){
    int res = 1;
    while(n){
        if(n%2!=0){
            res = (res*x) % mod;
        }

        n/=2;
        x = (x*x) % mod;
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned int n , res ;
        long long x = 2 ;
        int mod = 1000000007;
        cin>>n;
        res = power(x,n-1,mod);
        cout<< res << endl;
    }
    return 0;
}