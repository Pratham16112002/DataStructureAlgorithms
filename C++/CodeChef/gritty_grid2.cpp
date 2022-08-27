#include<iostream>


using namespace std;

void solve(){
    int n , m , x , y;
    cin>>n>>m>>x>>y;

    int st = (n-1) + (m-1);

    if(x %2 == 0 && (st) %2 && y %2 == 0){
        cout<<"NO"<<endl;
    }
    else if(x%2 && (st)%2 == 0 && y%2){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
