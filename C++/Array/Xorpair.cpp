#include <iostream>
#include <algorithm>
using namespace std;




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int minXor = arr[0]^arr[1];
        for (int i = 1; i < n-1; i++)
        {
           int temp = arr[i] ^ arr[i+1];
           if(temp<minXor){
            minXor=temp;
           }
        }
        
        cout<<minXor<<endl;
        
    }
    return 0;
}