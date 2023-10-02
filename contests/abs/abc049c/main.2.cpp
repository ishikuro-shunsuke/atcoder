#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());

  vector<string> rev_matcher = {"dream", "dreamer", "erase", "eraser"};
  for (int i = 0; i < rev_matcher.size(); i++) {
    reverse(rev_matcher.at(i).begin(), rev_matcher.at(i).end());
  }

  int p = 0;
  while (p < S.size()) {
    if (S.size() - p >= 5) {
      string five_letter = {S.at(p), S.at(p + 1), S.at(p + 2), S.at(p + 3),
                            S.at(p + 4)};

      if (five_letter == rev_matcher.at(0) ||
          five_letter == rev_matcher.at(2)) {
        p += 5;
        continue;
      }

      if (S.size() - p >= 6) {
        string six_letter = five_letter + S.at(p + 5);

        if (six_letter == rev_matcher.at(3)) {
          p += 6;
          continue;
        }

        if (S.size() - p >= 7) {
          string seven_letter = six_letter + S.at(p + 6);

          if (seven_letter == rev_matcher.at(1)) {
            p += 7;
            continue;
          }
        }
      }
    }
    cout << "NO" << endl;
    return 0;
  }
  cout << "YES" << endl;
}

// STARTED: 2023/10/01 15:09:53
// SUBMITTED: 2023/10/01 15:40:40
