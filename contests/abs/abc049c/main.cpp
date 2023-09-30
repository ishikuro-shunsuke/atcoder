#include<bits/stdc++.h>
using namespace std;

const vector<string> words{"dream", "dreamer", "erase", "eraser"};

// 解けなかったので解説を見た。後ろから読むというアイディアに気が付かなかった。
// ひらめきが無かったとしても DP, DFS, BFS, Greedy が使えれば解けるらしい。

// 再帰を使ったこれはシンプルだが TLE になってしまう。
/*
bool checkSuffix(const string S, const string T) {
  if (S == T) {
    return true;
  } else if (T.length() > S.length() || T != S.substr(0, T.length())) {
    return false;
  }

  for (string suffix : words) {
    if (checkSuffix(S, T + suffix)) {
      return true;
    }
  }
  return false;
}

int main() {
  string S;
  cin >> S;
  cout << (checkSuffix(S, "") ? "YES" : "NO") << endl;
  return 0;
}
*/

int main() {
  string S;
  cin >> S;

  string T = "";
  bool found = false;
  do {
    found = false;
    for (string prefix : words) {
      string test = prefix + T;
      if (test == S) {
        cout << "YES" << endl;
        return 0;
      }
      if (test.length() <= S.length() && test == S.substr(S.length() - test.length())) {
        T = test;
        found = true;
      }
    }
  } while (found);
  cout << "NO" << endl;
  return 0;
}
