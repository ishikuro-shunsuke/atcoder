#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  bool yes = true;
  for (int i : views::iota(0, 16)) {
    if ((i + 1) % 2 == 0) {
      if (S.at(i) != '0') {
        yes = false;
      }
    }
  }

  cout << (yes ? "Yes" : "No") << endl;
}

// STARTED: 2023/10/07 21:00:55
// SUBMITTED: 2023/10/07 21:05:16
