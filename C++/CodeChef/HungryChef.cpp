#include<iostream>

using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int x,y,n,r;
        cin>>x>>y>>n>>r;

        if((r/y)>=n){
            cout<< "0"<<" "<<n<<endl;
        }
        else if((r/x )< n){
            cout<<"-1"<<endl;
        }
        else {
            int k = (r - (n*y))/(x-y);
            if((r-(n*y))%(x-y)!=0){
                k=k+1;
            }
            cout<<k<<" "<<n-k<<endl;
        }
    }
    return 0;
}