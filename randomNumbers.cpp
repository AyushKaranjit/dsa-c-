// 1. Write a program that can be used a math tutor for a young student.
// The program should display two random numbers to be added, such
// as:
// 247
// +129
// The program should then pause while the student works on the
// problem. When the student is ready to check the answer, he or she can
// press a key and the program will display the correct solution:
// 247
// +129
// = 376
// [Hint: MIN + rand() % MAX will generate a random number between
// MIN and MAX]
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int main ()
{
    int num1, num2, sum;
    const int MIN = 100 , MAX=999;
    srand(time(NULL));
    num1 = MIN + rand() % MAX;
    num2 = MIN + rand() % MAX;
    cout << setw(5) << num1 << endl;
    cout << "+" << setw(4) << num2 << endl;
    cout << "_______" << endl;
    cin >> sum;
    cout << "Ready to check the answer" << endl;
    cin.get();
    cout << setw(5) << num1 << endl;
    cout << "+" << setw(4) << num2 << endl;
    cout << "_______" << endl;
    cout << "=" <<setw(4) <<sum <<endl;
    if (num1 + num2 == sum)
    {
        cout << "Congratulations! The answer is correct" << endl;
    }
    else
    {
        cout << "The answer is incorrect. The correct answer is: " << num1 + num2 <<endl;
    }

    return 0;
}