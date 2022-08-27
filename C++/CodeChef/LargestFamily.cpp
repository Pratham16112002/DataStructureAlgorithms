#include <bits/stdc++.h>

void solve() {
  long long int n;
  std::cin >> n;
  long long int claim[n];
  for (int i = 0; i < n; i++) {
    std::cin >> claim[i];
  }
  std::sort(claim, claim + n);
  int included = 0;
  long long int some_included = 0;
  for (int i = 0; i < n && some_included + claim[i] < n; i++) {
    some_included = some_included + claim[i];
    included++;
  }
  std::cout << included << std::endl;
}

int main() {

  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
