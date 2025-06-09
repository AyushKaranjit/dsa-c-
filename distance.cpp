#include <iostream>
using namespace std;

int getDistance(int speed, int time) { return (speed * time); }

// int getDistance(int speed, int time);
int main() {
  int s, t;
  cout << "Enter vehicle's speed and time: ";
  cin >> s >> t;
  cout << "The distance the vehicle has travelled is: " << getDistance(s, t)
       << endl;
  return 0;
}
