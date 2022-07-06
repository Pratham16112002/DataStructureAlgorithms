#include<iostream>

using namespace std;

void solve(long arr[], long n , long k){
    long index = n - (k%n);
    for(int i = index ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<index ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int t ; 
    cin>>t;
    while(t--){
        long n, k;
        cin >> n >> k;
        long arr[n];
        for (int i = 0; i <=n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n, k);
    }
   
    return 0;
}
