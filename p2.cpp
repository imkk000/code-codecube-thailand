#include <iostream>

using namespace std;

unsigned gcd(unsigned number1, unsigned number2) {
  if (number1 == 0) {
    return number2;
  }
  return gcd(number2 % number1, number1);
}

int main() {
  ios_base::sync_with_stdio(false);
  unsigned number1, number2;
  cin >> number1 >> number2;
  cout << gcd(number1, number2);
  return 0;
}
