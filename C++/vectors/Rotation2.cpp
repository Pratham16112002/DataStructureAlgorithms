#include<iostream>
#include <vector>

using namespace std;
void reverse(vector<int> num , int high ,int low){
    while(low<=high){
        swap(num[low],num[high]);
        low++;
        high--;
    }
}

void rotate(vector<int>& num , int k){
    int n = (int)num.size();
    reverse(num,0,n-k-1);
    reverse(num,n-k,n-1);
    reverse(num,0,n-1);
}
int main(){
    vector<int> num ;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    num.push_back(6);
    num.push_back(7);
    rotate(num,2);
    return 0;
    for (int i : num)
    {
        cout<<i<<"";
    }
    return 0;
}