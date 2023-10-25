#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (string &s : S) {
    cin >> s;
  }

  vector<pair<int, int>> p(N);
  for (int i : views::iota(0, N)) {
    p.at(i).first = i + 1;
    p.at(i).second = [=]() {
      int score = 0;
      for (char c : S.at(i)) {
        if (c == 'o') {
          score += 1;
        }
      }
      return score;
    }();
  }


  ranges::sort(p, [=](auto p1, auto p2) {
    if (p1.second > p2.second) {
      return true;
    } else if (p1.second == p2.second) {
      return (p1.first < p2.first);
    } else {
      return false;
    }
  });

  for (int i : views::iota(0, N)) {
    cout << p.at(i).first;
    if (i < N - 1) {
      cout << " ";
    }
  }
  cout << endl;
}

// STARTED: 2023/10/07 21:05:52
// SUBMITTED: 2023/10/07 21:25:21
