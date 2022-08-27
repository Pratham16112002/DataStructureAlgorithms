#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
       std::cin>>n;
        std::vector<int> arr;
        arr.resize(n);
        int max = INT_MIN;

        std::map<int,int> hm;
        for(int j = 0 ; j<n ; j++){
            int tem;
            std::cin >>tem;
            hm[tem]++;
        }
        int ans = 1;
        int totalAssigned = 0;
        for(auto e:hm){
            int noOfReq = e.second;
            int noOfBoxes = ans*e.first - totalAssigned;
            if(noOfReq > noOfBoxes){
                ans += std::ceil(((noOfReq - noOfBoxes)/(float)e.first));
            }

            totalAssigned +=e.second;
        }
        std::cout<<ans<<"\n";
    }
}