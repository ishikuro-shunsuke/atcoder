#include <bits/stdc++.h>
using namespace std;
int main() {
  string input;
  cin >> input;
  vector<int> ABCD;
  ranges::transform(input, back_inserter(ABCD), [](char c) { return c - '0'; });

  bool found = false;
  auto search_seven = [=, &found](auto self, string ops) {
    if (found) {
      return;
    }

    if (ops.size() < 3) {
      self(self, ops + '+');
      self(self, ops + '-');
      return;
    }

    int sum = ABCD.at(0);
    string equation = to_string(sum);;
    for (int i = 1; char op : ops) {
      if (op == '+') {
        sum += ABCD.at(i);
      } else {
        sum -= ABCD.at(i);
      }
      equation += op + to_string(ABCD.at(i));
      i++;
    }
    if (sum == 7) {
      found = true;
      cout << equation + "=7" << endl;
    }
  };

  string ops;
  search_seven(search_seven, ops + '+');
  search_seven(search_seven, ops + '-');
}

// STARTED: 2023/10/03 19:33:11
// SUBMITTED: 2023/10/03 20:05:55
