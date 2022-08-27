#include <iostream>
#define mod 100000000 /

bool isCorner(int a, int b) {
  if ((a == 1 && b == 1) || (a == 1 && b == 8) || (a == 8 && b == 1) ||
      (a == 8 && b == 8)) {
    return true;
  } else {
    return false;
  }
}

bool isNearCorner(int a, int b) {
  if (a == 1 || a == 8 || b == 1 || b == 8) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    int ans[9][9];

    for (int i = 1; i <= 8; i++) {
      for (int j = 1; j <= 8; j++) {
        ans[i][j] = 0;
      }
    }
    ans[a][b] = 1;

    bool corner = 0, nearcorner = 0;

    if (isCorner(a, b)) {
      corner = 1;
    } else if (isNearCorner(a, b)) {
      nearcorner = 1;
    }

    if (corner) {
      if (a == 1) {
        if (b == 1) {
          ans[2][3] = 2;
        } else {
          ans[2][6] = 2;
        }
      } else {
        if (b == 1) {
          ans[7][3] = 2;
        } else {
          ans[7][6] = 2;
        }
      }
    } else if (nearcorner) {
      if (a == 1) {
        ans[a + 2][b - 1] = 2;
        ans[a + 2][b + 1] = 2;
      } else if (a == 8) {
        ans[a - 2][b - 1] = 2;
        ans[a - 2][b + 1] = 2;
      } else if (b == 1) {
        ans[a - 1][b + 2] = 2;
        ans[a + 1][b + 2] = 2;
      } else {
        ans[a - 1][b - 2] = 2;
        ans[a + 1][b - 2] = 2;
      }
    } else {
      if (a > 3) {
        if (b > 2) {
          ans[a + 1][b - 2] = 2;
          ans[a - 3][b + 1] = 2;
        } else {
          ans[a - 3][b - 1] = 2;
          ans[a + 1][b + 2] = 2;
        }
      } else {
        if (b > 2) {
          ans[a - 1][b - 2] = 2;
          ans[a + 3][b + 1] = 2;
        } else {
          ans[a + 3][b - 1] = 2;
          ans[a - 1][b + 2] = 2;
        }
      }
    }

    for (int i = 1; i <= 8; i++) {
      for (int j = 1; j <= 8; j++) {
        std::cout << ans[i][j] << std::endl;
      }
      std::cout << std::endl;
    }
  }
  return 0;
}
