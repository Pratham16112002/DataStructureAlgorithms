#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    long long a[n], b[n], c[n];
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      std::cin >> b[i];
    }
    long long max = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      c[i] = a[i] - b[i];
      sum += c[i];
      if (c[i] > 0) {
        max += c[i];
      }
    }
    if (sum == 0) {
      std::cout << max << std::endl;
    } else {
      std::cout << -1 << std::endl;
    }
  }
}
