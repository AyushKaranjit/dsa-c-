#include <iostream>
using namespace std;

void zeroSmaller(int &, int &);

int main() {
  int n1, n2;
  cout << "Enter two integers: ";
  cin >> n1 >> n2;
  cout << "Before setting the smaller of the two numbers to 0" << endl;
  cout << "First Number: " << n1 << endl;
  cout << "Second Number: " << n2 << endl;
  zeroSmaller(n1, n2);
  cout << "After setting the smaller of the two numbers to 0" << endl;
  cout << "First Number: " << n1 << endl;
  cout << "Second Number: " << n2 << endl;
  return 0;
}

void zeroSmaller(int &num1, int &num2) { (num1 < num2 ? num1 = 0 : num2 = 0); }
