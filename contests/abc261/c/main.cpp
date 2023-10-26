#include <bits/stdc++.h>
using namespace std;
int main() {
  int64_t N;
  cin >> N;
  map<string, int> name_count;

  for ([[maybe_unused]] auto _ : views::iota(0, N)) {
    string S;
    cin >> S;
    if (name_count.contains(S)) {
      name_count.at(S) += 1;
      cout << S << "(" << name_count.at(S) << ")" << endl;
    } else {
      name_count.emplace(S, 0);
      cout << S << endl;
    }
  }
}

// STARTED: 2023/10/25 20:55:30
// SUBMITTED: 2023/10/25 21:05:07
