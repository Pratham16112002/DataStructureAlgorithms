#include <iostream>
#include <algorithm>
#include <numeric>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = 0, b = 0;
        int max_diff = INT8_MIN;
        vector<int> optimus_ans;
        for (int i = x; i <= y; i++)
        {

            a = i;
            b = y - (y % i);
            int curr_diff = abs(a - b);
            if (curr_diff < (i - x))
            {
                break;
            }
            if (curr_diff >= max_diff)
            {
                max_diff = curr_diff;
                optimus_ans.push_back(a);
                optimus_ans.push_back(b);
                
            }
            
        }
        cout << optimus_ans.at(optimus_ans.size() - 1) << " ";
        cout << optimus_ans.at(optimus_ans.size() - 2) << endl;
    }
    return 0;
}