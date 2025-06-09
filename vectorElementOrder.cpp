#include <iostream>
#include <vector>
using namespace std;

bool equals(vector<int>, vector<int>);
void display(vector<int>);

int main() {
  vector<int> vec1(5);
  vector<int> vec2(5);

  for (int i = 0; i < vec1.size(); i++)
    vec1[i] = i + 2;

  for (int i = 0; i < vec2.size(); i++)
    vec2[i] = i + 2;

  cout << "Vector 1: ";
  display(vec1);
  cout << "Vector 2: ";
  display(vec2);

  if (equals(vec1, vec2)) {
    cout << "The vectors are equal." << endl;
  } else {
    cout << "The vectors are not equal." << endl;
  }

  return 0;
}

void display(vector<int> a) {
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
}

bool equals(vector<int> v1, vector<int> v2) {
  if (v1.size() != v2.size())
    return false;

  for (int i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i])
      return false;
  }

  return true;
}
