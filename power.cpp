#include <iostream>
using namespace std;

int power(int n, int p = 2);
double power(double n, int p = 2);
long power(long n, int p = 2);

int main() {
  double n;
  int p;
  char choice;

  cout << "Enter a number: ";
  cin >> n;

  cout << "Do you want to specify a power? (y/n): ";
  cin >> choice;

  if (choice == 'y' || choice == 'Y') {
    cout << "Enter the power: ";
    cin >> p;
    cout << "The value is: " << power(n, p) << endl;
  } else {
    cout << "The value (squared) is: " << power(n) << endl;
  }

  return 0;
}

double power(double n, int p) {
  double result = 1.0;
  for (int i = 1; i <= p; i++) {
    result = result * n;
  }
  return result;
}
