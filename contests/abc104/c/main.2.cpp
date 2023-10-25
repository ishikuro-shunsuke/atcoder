#include <bits/stdc++.h>
using namespace std;
int main() {
  int D, G;
  cin >> D >> G;
  vector<int> p(D + 1, 0), c(D + 1, 0);
  for (int i : views::iota(1, D + 1)) {
    cin >> p.at(i) >> c.at(i);
  }

  int min_count = numeric_limits<int>::max();
  auto solve_problems = [=, &min_count](auto self, int d, int count, int score,
                                        vector<bool> completed_list,
                                        bool completed) {
    completed_list.emplace_back(completed);

    if (d > D) {
      if (score >= G) {
        min_count = min(min_count, count);
        return;
      }

      for (int rindex_d = D;
           bool completed_this_d : completed_list | views::reverse) {
        if (!completed_this_d) {
          for (int i = 0; i < p.at(rindex_d); i++) {
            score += rindex_d * 100;
            count++;
            if (score >= G) {
              min_count = min(min_count, count);
              return;
            }
          }
        }

        rindex_d--;
      }
      return;
    }

    self(self, d + 1, count, score, completed_list, false);
    self(self, d + 1, count + p.at(d), score + p.at(d) * d * 100 + c.at(d),
         completed_list, true);
  };

  vector<bool> completed_list;
  solve_problems(solve_problems, 1, 0, 0, completed_list, false);

  cout << min_count << endl;
}

// STARTED: 2023/10/03 22:38:55
// SUBMITTED: 2023/10/03 23:50:35
