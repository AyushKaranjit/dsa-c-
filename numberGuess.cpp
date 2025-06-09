// 4. Write a program that generates a random number and asks the user to
// guess what the number is. If the user’s guess is higher than the
// random number, the program should display “Too high, try again.” If
// the user’s guess is lower than the random number, the program should
// display “Too low, try again.” The program should use a loop that
// repeats the user correctly guesses the random number. The program
// should keep a count of the number of the guesses that the user makes.
// When the user correctly guesses the random number, the program
// should display the number of guesses.
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int main ()
{
    int random, guess, count=0;
    const int MIN = 0 , MAX=10;
    srand(time(NULL));
    random = MIN + rand() % MAX;
    cout << random << endl;
    cout << "Guess the random generated randomber :" << endl;
    cin >> guess;
    count = count + 1;
    while (guess!=random)
    {
        if (guess > random)
        {
            cout << "Too high, try again." << endl;
        }
        else if (guess < random)
        {
            cout << "Too low, try again." << endl;
        }
        cout << "Guess the number again" << endl;
        cin >> guess;
        count = count + 1;
    }
    cout << "Congratulations! you have guessed the correct randomber." << endl;
    cout << "The total randomber of guesses you have made is: " << count << endl;

    return 0;
}