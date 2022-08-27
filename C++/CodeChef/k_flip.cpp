#include <bits/stdc++.h>
#define int long long
using namespace std;
int arr[200001], t, n, k;
char str[100001];
void solve()
{
    cin >> n >> k;
    t = 0;
    for (int i = 1; i <= n; ++i)
        cin >> str[i];
    for (int i = 0; i <= 2 * n; ++i)
        arr[i] = 0;
    for (int i = 1; i <= n - k + 1; ++i)
    {
        if ((str[i] + t) % 2 == 1)
        {
            t++;
            arr[i + k - 1] = 1;
        }
        t -= arr[i];
        str[i] = 48;
    }
    for (int i = n - k + 2; i <= n; ++i)
    {
        str[i] = 48 + (str[i] + t) % 2;
        t -= arr[i];
    }
    for (int i = 1; i <= n; ++i)
        putchar(str[i]);
    putchar('\n');
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();

}