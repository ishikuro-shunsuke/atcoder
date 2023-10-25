#include <bits/stdc++.h>
using namespace std;

// recursive function

int main() {
  int64_t S;
  cin >> S;

  int64_t result = 0;

  auto add_by_slice = [S, &result](auto self, int cursor,
                                   vector<bool> separator,
                                   bool next) mutable -> void {
    if (cursor == 0 && next == false) {
      return;
    }

    separator.emplace_back(next);
 
    if (cursor > 0) {
      self(self, cursor - 1, separator, false);
      self(self, cursor - 1, separator, true);
      return;
    }

    for (int digit = log10(S); bool slice : separator) {
      if (slice) {
        int64_t mask = (int64_t)pow(10, digit);
        result += S / mask;
        S %= mask;
      }
      digit--;
    }
  };

  int cursor = log10(S);
  vector<bool> separator;
  add_by_slice(add_by_slice, cursor, separator, false);
  add_by_slice(add_by_slice, cursor, separator, true);

  cout << result << endl;
}

// STARTED: 2023/10/03 07:25:45
// SUBMITTED: 2023/10/03 19:25:37
