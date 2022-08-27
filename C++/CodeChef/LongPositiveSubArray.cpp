#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <math.h>

int solve() {
  int n;
  std::cin >> n;
  if (n == 1) {
    return 1;
  } else {
    int p_val = floor(log2(n));
    int ans = std::max(pow(2, p_val - 1), n - pow(2, p_val) + 1);
    return ans;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    std::cout << solve() << std::endl;
  }
  return 0;
}
