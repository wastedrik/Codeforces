#include <iostream>

int main() {
  std::string word;
  std::cin >> word;
  
  char first, last = '\0';
  int nums = 0;

  for (const char& c : word) {
    nums += 1;

    if (first != '\0') {
      last = c;
    } else {
      first = c;
    }
  }

  if (nums > 10) {
    std::cout << first << nums - 2 << last;
  } else {
    std::cout << word;
  }
}