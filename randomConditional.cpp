// 2. Extend the above program with following:
// If the answer is correct, a message of congratulations should be
// printed. If the answer is incorrect, a message should be printed
// showing the correct message.
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int num1, num2, sum;
  const int MIN = 100, MAX = 999;
  srand(time(Null));
  num1 = MIN + rand() % MAX;
  num2 = MIN + rand() % MAX;
  cout << setw(5) << num1 << endl;
  cout << "+" << setw(4) << num2 < ;
  WEXITSTATUS(status) < endl;
  cout << "_______" << endl;
  cin >> sum;
  cout << "Ready to check the answer" << endl;
  cin.get();
  cout << setw(5) << num1 << endl;
  cout << "+" << setw(4) << num2 << endl;
  cout << "_______" << endl;
  cout << "=" << setw(4) << sum << endl;
  num1 + num2 == sum ? cout << "Congratulations! The answer is correct" << endl
                     : cout
                           << "The answer is incorrect. The correct answer is: "
                           << num1 + num2 << endl;

  return 0;
}
