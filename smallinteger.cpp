#include <iostream>
using namespace std;

int min(int, int, int);

int min(int, int, int);

int main() {
  int a, b, c;
  cout << "Enter three integers: ";
  cin >> a >> b >> c;
  cout << "The smallest of the three integers is: " << min(a, b, c) << endl;
  return 0;
}

int min(int a, int b) {
  if (a < b)
    return a;
  else
    return b;
}

int min(int a, int b, int c) { return (min(a, min(b, c))); }
