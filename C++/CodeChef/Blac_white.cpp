#include <bits/stdc++.h>
#include <cmath>
#define int long long

int n, a[100001], s0, s1, s;

void solve() {
  std::cin >> n;
  s0 = 0;
  s1 = 0;
  s = 0;
  for (int i = 1; i <= n; i++) {
    std::cin >> a[i];
    s0 += a[i] == 0;
    s1 += a[i] == 1;
  }
  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      s += (a[i] == a[n]);
    } else {
      s += a[i] == a[i - 1];
    }
  }
  s -= std::abs(s0 - s1);
  std::cout << (s % 4 == 0 ? "bob" : "alice") << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
