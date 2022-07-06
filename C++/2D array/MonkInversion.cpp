#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = i; k < n; k++)
                {
                    for (int z = j; z < n; z++)
                    {
                        if (arr[i][j] > arr[k][z])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout << "Hello" << endl;
        cout << count << endl;
    }
    return 0;
}