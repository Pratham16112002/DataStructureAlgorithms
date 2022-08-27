#include <cmath>
#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  int d = pow(2, n);
  std::vector<int> v;
  v[0] = d / 2;
  v[1] = d / 4;
  for (int i = 2; i < n; i++) {
    v[i] = (v[i - 1] + v[i - 2]) / 2;
    std::cout << v[n - 1] << ' ' << d << std::endl;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
