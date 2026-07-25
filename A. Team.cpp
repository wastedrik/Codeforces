#include <iostream>

int main() {
  int a, b, c, n, res = 0;
  std::cin >> n;

  while (n--) {
    std::cin >> a >> b >> c;
  
    if (a + b + c >= 2) {
      res += 1;
    }
  }
  std::cout << res << std::endl;
}