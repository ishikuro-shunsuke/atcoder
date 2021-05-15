#include<bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  int count = 0;
  for (int i = 0; i < 10000; i++) {
    vector<bool> a(10, false);
    int x = i;
    for (int d = 0; d < 4; d++) {
      a.at(x % 10) = true;
      x /= 10;
    }

    bool possible = true;
    for (int n = 0; n < 10; n++) {
      if (S.at(n) == 'o' && a.at(n) != true) {
        possible = false;
      }
      if (S.at(n) == 'x' && a.at(n) == true) {
        possible = false;
      }
    }
    if (possible) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
