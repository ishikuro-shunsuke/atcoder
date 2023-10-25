#include <bits/stdc++.h>
using namespace std;

// 101^10 のスタックができ TLE となる

int main() {
  int D, G;
  cin >> D >> G;
  vector<int> p(D + 1, 0), c(D + 1, 0);
  for (int i : views::iota(1, D + 1)) {
    cin >> p.at(i) >> c.at(i);
  }

  int min_count = numeric_limits<int>::max();

  auto solve_problems = [=, &min_count](auto self, int d, int count, int sum) {
    if (sum >= G) {
      min_count = min(min_count, count);
      return;
    }

    if (d > D) {
      return;
    }

    for (int i : views::iota(0, p.at(d) + 1)) {
      int bonus = 0;
      if (i == p.at(d)) {
        bonus = c.at(d);
      }
      self(self, d - 1, count + i, sum + 100 * d * i + bonus);
    }
  };

  solve_problems(solve_problems, 1, 0, 0);
  cout << min_count << endl;
}

// STARTED: 2023/10/03 20:40:14
// SUBMITTED: 2023/10/03 22:17:19
