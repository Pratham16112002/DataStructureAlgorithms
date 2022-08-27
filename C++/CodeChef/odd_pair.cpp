#include <bits/stdc++.h>
#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    long long n;
    std::cin >> n;
    long long pairs = 0;
    long long even = 0, odd = 0;
    if (n % 2 == 0) {
      even = n / 2;
      odd = n / 2;
    } else {
      even = n / 2;
      odd = (n + 1) / 2;
    }
    pairs = even * odd;
    if (n <= 1) {
      std::cout << 0 << std::endl;
    } else {
      std::cout << pairs * 2 << std::endl;
    }
  }
}
