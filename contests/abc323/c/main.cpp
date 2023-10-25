#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int64_t> A(M);
  for (int64_t &a : A) {
    cin >> a;
  }
  vector<string> S(N);
  for (string &s : S) {
    cin >> s;
  }

  vector<int64_t> current_scores(N);
  int64_t max_score = -1;
  for (int i : views::iota(0, N)) {
    for (int j : views::iota(0, M)) {
      if (S.at(i).at(j) == 'o') {
        current_scores.at(i) += A.at(j);
      }
    }
    current_scores.at(i) += i + 1;
    max_score = max(max_score, current_scores.at(i));
  }

  vector<pair<int, int64_t>> A_with_index(M);
  for (int i : views::iota(0, M)) {
    A_with_index.at(i).first = i;
    A_with_index.at(i).second = A.at(i);
  }
  ranges::sort(A_with_index,
               [](auto a1, auto a2) { return (a1.second > a2.second); });

  vector<int> rewind_count(N, 0);
  vector<int64_t> rewind_scores = current_scores;
  for (int i : views::iota(0, N)) {
    for (auto a : A_with_index) {
      if (rewind_scores.at(i) >= max_score) {
        break;
      }

      if (S.at(i).at(a.first) == 'x') {
        rewind_scores.at(i) += a.second;
        rewind_count.at(i) += 1;
      }
    }
  }

  for (int c : rewind_count) {
    cout << c << endl;
  }
}

// STARTED: 2023/10/07 21:27:34
// SUBMITTED: 2023/10/07 21:56:46
// SUBMITTED: 2023/10/07 22:04:22
// SUBMITTED: 2023/10/07 22:16:43
// SUBMITTED: 2023/10/07 22:18:35
// SUBMITTED: 2023/10/07 22:24:01
// SUBMITTED: 2023/10/07 22:36:56
