#include <iostream>
using namespace std;

int get_change(int m) {
  int count = 0;
  count = m/10;
  count += (m%10)/5;
  count += (m%10)%5;
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
