#include<iostream>

using namespace std;


void solve(){
    long long int x, y, n;
    cin >> x >> y >> n;
    if (x % y == 0)
    {
        cout << "-1" << endl;
        return;
    }
    long long int n1 = n;
    if (n1 % x != 0)
    {
        n1 = n + x - (n1 % x);
    }
    while (!(n1 % x == 0 && n1 % y != 0))
    {
        n1 = n1 + x;
    }
    cout << n1 << endl;
}
int main(){
    int t ; 
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}