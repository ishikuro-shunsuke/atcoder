#include<bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int count = 0;
  for (int i = A; i < B+1; i++) {
    int n = i;
    vector<int> d(5);
    for (int j = 0; j < 5; j++) {
      d.at(j) = n % 10;
      n /= 10;
    }
    if (d.at(0) == d.at(4) && d.at(1) == d.at(3)) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
