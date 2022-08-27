#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    int d = n / __gcd(n, m);
    if (d == n) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << d << endl;
    }
  }
}
