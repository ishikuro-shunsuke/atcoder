#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> t(N);
  for (int i : views::iota(0, N)) {
    cin >> t.at(i);
  }

  int min_time = numeric_limits<int>::max();
  auto search = [N, t, &min_time](auto self, int grill_a, int grill_b, int i) {
    if (i == N) {
      min_time = min(max(grill_a, grill_b), min_time);
      return;
    }

    self(self, grill_a + t.at(i), grill_b, i + 1);
    self(self, grill_a, grill_b + t.at(i), i + 1);
  };

  search(search, t.at(0), 0, 1);
  cout << min_time << endl;
}

// STARTED: 2023/10/04 21:16:08
// SUBMITTED: 2023/10/04 21:33:47
