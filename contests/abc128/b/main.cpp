#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<tuple<int, string, int>> R;
  for (int i : views::iota(0, N)) {
    string S;
    int P;
    cin >> S >> P;
    R.emplace_back(i + 1, S, P);
  }

  ranges::sort(R, [](auto r1, auto r2) {
    if (get<1>(r1) < get<1>(r2)) {
      return true;
    } else if (get<1>(r1) == get<1>(r2)) {
      return (get<2>(r1) > get<2>(r2));
    } else {
      return false;
    }
  });

  for (auto r : R) {
    cout << get<0>(r) << endl;
  }
}

// STARTED: 2023/10/08 20:38:24
// SUBMITTED: 2023/10/08 21:07:17
