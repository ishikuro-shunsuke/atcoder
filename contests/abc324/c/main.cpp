#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  string Td;
  cin >> Td;
  vector<string> S(N);
  for (string &s : S) {
    cin >> s;
  }

  vector<int> result;

  for (int index = 1; string s : S) {
    bool cond1 = s == Td;
    bool cond2 = [=]() {
      for (int i : views::iota(0, (int)s.length())) {
        string s2 = s;
        s2.erase(i, 1);
        if (s2 == Td) {
          return true;
        }
      }
      return false;
    }();
    bool cond3 = [=]() {
      for (int i : views::iota(0, (int)Td.length())) {
        string Td2 = Td;
        Td2.erase(i, 1);
        if (s == Td2) {
          return true;
        }
      }
      return false;
    }();
    bool cond4 = [=]() {
      if (Td.length() != s.length()) {
        return false;
      }

      for (int i : views::iota(0, (int)Td.length())) {
        string Td2 = Td;
        Td2.erase(i, 1);

        string s2 = s;
        s2.erase(i, 1);

        if (Td2 == s2) {
          return true;
        }
      }
      return false;
    }();

    if (cond1 || cond2 || cond3 || cond4) {
      result.emplace_back(index);
    }

    index++;
  }

  ranges::sort(result);

  cout << result.size() << endl;

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result.at(i);

    if (i + 1 < (int)result.size()) {
      cout << " ";
    }
  }

  cout << endl;
}

// STARTED: 2023/10/14 22:10:25
