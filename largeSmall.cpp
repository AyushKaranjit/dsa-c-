#include <iostream>
using namespace std;

int main ()
{
    int n,min,max;
    cout << "Enter an integer: ";
    cin >> n;
    min = max = n;
    while (n != -99)
    {
        cout << "Enter an integer: ";
        cin >> n;
        if (n != -99)
        {
            if (n < min)
            {
                min = n;
            }
            if ( n > max)
            {
                max = n;
            }
        }
    }
    cout << "The largest number is: " << max << endl;
    cout << "The smallest number is; " << min << endl;
    return 0;
}
