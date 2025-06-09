#include <iostream>
using namespace std;

int main ()
{
    int n,sum=0;
    do
    {
        cout<<"Enter a positive number: ";
        cin>>n;
    } while (n<0);
    for (int i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    cout << "The sum of numbers until " << n << " is " << sum << endl;
    return 0;
}