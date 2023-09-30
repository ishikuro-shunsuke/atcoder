#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  int result = 1;
  for (int i = 1; i < S.size(); i += 2) {
    if (S.at(i) == '+') {
      result++;
    } else {
      result--;
    }
  }

  cout << result << endl;
}

// STARTED: 2023/09/30 10:20:53
// SUBMITTED: 2023/09/30 10:24:49
