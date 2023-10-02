#include <bits/stdc++.h>
#include <ranges>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;
  vector<string> a(H);
  for (int i = 0; i < H; i++) {
    cin >> a.at(i);
  }

  vector<bool> valid_row(H, false);
  vector<bool> valid_col(W, false);

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (a.at(i).at(j) == '#') {
        valid_row.at(i) = true;
        break;
      }
    }
  }

  for (int j = 0; j < W; j++) {
    for (int i = 0; i < H; i++) {
      if (a.at(i).at(j) == '#') {
        valid_col.at(j) = true;
        break;
      }
    }
  }

  for (int i = 0; i < H; i++) {
    if (!valid_row.at(i)) {
      continue;
    }
    for (int j = 0; j < W; j++) {
      if (!valid_col.at(j)) {
        continue;
      }
      cout << a.at(i).at(j);
    }
    cout << endl;
  }
}

// STARTED: 2023/10/01 19:42:01
// SUBMITTED: 2023/10/01 20:22:18
