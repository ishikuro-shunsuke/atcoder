#include <bits/stdc++.h>
using namespace std;

const vector<pair<int, int>> d = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int main() {
  vector<string> A(10);
  for (int i : views::iota(0, 10)) {
    cin >> A.at(i);
  }

  // find landing point
  auto [landing_i, landing_j] = [A]() -> pair<int, int> {
    for (int i : views::iota(0, 10)) {
      for (int j : views::iota(0, 10)) {
        if (A.at(i).at(j) == 'o') {
          return {i, j};
        }
      }
    }
    return {-1, -1};
  }();

  vector<vector<bool>> checked(10, vector<bool>(10, false));

  auto search_island = [](auto self, auto board, auto &checked, int i,
                          int j) -> void {
    checked.at(i).at(j) = true;

    for (int direction : views::iota(0, 4)) {
      auto [di, dj] = d.at(direction);
      int next_i = i + di;
      int next_j = j + dj;
      if (0 <= next_i && next_i < 10 && 0 <= next_j && next_j < 10 &&
          board.at(next_i).at(next_j) == 'o' &&
          checked.at(next_i).at(next_j) == false) {
        self(self, board, checked, next_i, next_j);
      }
    }
  };

  auto is_single_island = [](auto board, auto checked) {
    for (int i : views::iota(0, 10)) {
      for (int j : views::iota(0, 10)) {
        if (board.at(i).at(j) == 'o' && checked.at(i).at(j) == false) {
          return false;
        }
      }
    }
    return true;
  };

  auto reset_checked = [&checked]() {
    for (int i : views::iota(0, 10)) {
      for (int j : views::iota(0, 10)) {
        checked.at(i).at(j) = false;
      }
    }
  };

  for (int i : views::iota(0, 10)) {
    for (int j : views::iota(0, 10)) {
      if (A.at(i).at(j) == 'x') {
        vector<string> B;
        ranges::copy(A, back_inserter(B));
        B.at(i).at(j) = 'o';
        reset_checked();
        search_island(search_island, B, checked, landing_i, landing_j);
        if (is_single_island(B, checked)) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}

// STARTED: 2023/10/02 18:29:59
// SUBMITTED: 2023/10/02 20:45:38
