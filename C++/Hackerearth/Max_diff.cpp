#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int min = *min_element(arr.begin(), arr.end());
        int max = *max_element(arr.begin(), arr.end());
        cout << max - min << endl;
    }
   
    return 0;
}