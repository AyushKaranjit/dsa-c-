#include <iostream>
using namespace std;

int main() {
  cout << "Prime numbers between 2 and 200:\n";

  for (int num = 2; num <= 200; ++num) {
    bool isPrime = true;

    for (int i = 2; i * i <= num; ++i) {
      if (num % i == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      cout << num << " ";
    }
  }

  cout << endl;
  return 0;
}
