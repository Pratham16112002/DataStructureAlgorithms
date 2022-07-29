#include<iostream>


using namespace std;

long long int solve(long long int arr[], long long int n){
    long long int ans=0 ;
    long long int count = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==0){
            count = 0;
        }
        else {
            count++;
            ans+=count;
        }
    }
    return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n ;
        cin>>n;
        long long int arr[n];
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n)<<endl;
    }
    return 0;
}