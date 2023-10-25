#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> x(M), y(M);
  for (int i : views::iota(0, M)) {
    cin >> x.at(i) >> y.at(i);
  }

  int max_faction_size = 0;

  auto test_all_match = [=, &max_faction_size](auto self, int id,
                                               bool is_fellow,
                                               vector<int> fellows) {
    if (id > N) {
      for (int index = 0; int a : fellows) {
        for (int b : fellows | views::drop(index + 1)) {
          bool relation_found = [=] {
            for (int i : views::iota(0, M)) {
              if (x.at(i) == a && y.at(i) == b) {
                return true;
              }
            }
            return false;
          }();

          if (!relation_found) {
            return;
          }
        }
        index++;
      }

      max_faction_size = max(max_faction_size, (int)fellows.size());
      return;
    }

    if (is_fellow) {
      fellows.emplace_back(id);
    }

    self(self, id + 1, true, fellows);
    self(self, id + 1, false, fellows);
  };

  vector<int> fellows;
  test_all_match(test_all_match, 1, true, fellows);
  test_all_match(test_all_match, 1, false, fellows);

  cout << max_faction_size << endl;
}

// STARTED: 2023/10/04 21:36:21
// SUBMITTED: 2023/10/04 22:36:35
// SUBMITTED: 2023/10/04 23:33:34
