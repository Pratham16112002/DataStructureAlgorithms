#include <iostream>
#include<vector>

using namespace std;

int main()
{
    long long n_array_size, n_query_size;
    cin >> n_array_size >> n_query_size;
    long long arr[n_array_size];
    for (int i = 0; i < n_array_size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n_query_size; i++)
    {
        long long l, r;
        cin >> l >> r;
        vector<int> temp;
        temp.push_back(l);
        temp.push_back(r);
        vector<vector<int> > ans;
        ans.push_back(temp);

        // long long eval = 0;
        // for (int i = l; i <= r; i++)
        // {
        //     eval += (r - i + 1) * arr[i - 1];
        // }
        // cout << eval << endl;
    }
   

    return 0;
}