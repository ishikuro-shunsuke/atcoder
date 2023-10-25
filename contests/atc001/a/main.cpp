#include <bits/stdc++.h>
using namespace std;

const vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> c(H);
  for (int i : views::iota(0, H)) {
    cin >> c.at(i);
  }

  auto [s_i, s_j] = [=]() -> pair<int, int> {
    for (int i : views::iota(0, H)) {
      for (int j : views::iota(0, W)) {
        if (c.at(i).at(j) == 's') {
          return {i, j};
        }
      }
    }
    return {-1, -1};
  }();

  auto search_g = [=, &c](auto self, int i, int j) {
    if (c.at(i).at(j) == 'g') {
      return true;
    }

    c.at(i).at(j) = '#';

    for (int direction : views::iota(0, 4)) {
      int next_i = i + d.at(direction).first;
      int next_j = j + d.at(direction).second;

      if (0 <= next_i && next_i < H && 0 <= next_j && next_j < W &&
          c.at(next_i).at(next_j) != '#' && self(self, next_i, next_j)) {
        return true;
      }
    }

    return false;
  };

  cout << (search_g(search_g, s_i, s_j) ? "Yes" : "No") << endl;
  using namespace std;
}

// STARTED: 2023/10/02 22:00:36
// SUBMITTED: 2023/10/02 22:51:53
