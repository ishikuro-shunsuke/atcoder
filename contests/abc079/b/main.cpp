#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  vector<int64_t> L = { 2, 1 };
  for (int i : views::iota(2, N + 1)) {
    L.emplace_back(L.at(i - 1) + L.at(i - 2));
  }

  cout << L.at(N) << endl;
}

// STARTED: 2023/10/05 08:57:35
// SUBMITTED: 2023/10/05 09:08:13
