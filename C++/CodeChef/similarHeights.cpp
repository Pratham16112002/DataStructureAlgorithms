#include<bits/stdc++.h>


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> h(n+1);
        map<int,int> f;
        for(int i = 1 ; i<=n;i++){
            cin>>h[i];
            int x = h[i];
            f[x]++;
        }
    int count = 0;
    int maxFreq = 0;
    for( auto it:f){
        int x = it.first;
        int freq = it.second;
        maxFreq = max(freq,maxFreq);
        if(freq==1){ 
            count++;
        }
    }
    if(count != 1){
        cout<<(count + 1)/2<<endl;
    }
    else {
        sort(h.begin() + 1 , h.end());
        if ( f[h[n]] != 1){
            //If the largest element does not have frequenncy 1 or basically if the element with frequency 1 is not the largest element .
            cout<<1<<endl;
        }
        else {
            if (maxFreq > 2)
            { // We can make a smaller number  EQUAL to the largest number in 1 operation ensuring that the smaller number still has at least 2 occurances
                cout << 1 << endl;
            }
            else
            {
                // If all elements have frequency = 2 => we need to perform 2 operations of increasing both the elements and making them = x
                cout << 2 << endl;
            }
        }
        
    }
    }
}