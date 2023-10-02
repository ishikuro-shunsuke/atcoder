#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '1') {
      count += 1;
    }
  }
  cout << count << endl;
}

// STARTED: 2023/10/01 13:44:29
// SUBMITTED: 2023/10/01 13:46:40
