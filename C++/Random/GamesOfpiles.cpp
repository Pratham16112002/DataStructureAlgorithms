#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int odd_count = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] && 1)
            {
                odd_count++;
            }
            if (mini >= arr[i])
            {
                mini = arr[i];
            }
        }
        if (mini == 1)
        {
            cout << "chef" << endl;
        }
        else if (odd_count % 2 == 0)
        {
            cout << "chefina" << endl;
        }
        else
        {
            cout << "chef" << endl;
        }
    }
    return 0;
}
