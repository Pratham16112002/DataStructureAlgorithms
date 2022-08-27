// Maximum Number of Pairs in Array

#include<iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    vector<int> nums{0,0,1,2};
    vector<int> ans;
    int count = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size();)
    {
        if (nums.size() == 1)
        {
            break;
        }
        else
        {
            if (nums[i] == nums[i + 1])
            {
                count++;
                i += 2;
            }
            else
            {
                i++;
            }
        }
    }
    int left_over = nums.size() - (count * 2);
    ans.push_back(count);
    ans.push_back(left_over);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    for(int i = 0 ;i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}