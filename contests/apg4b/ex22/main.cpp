#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> p(N);
  for (auto &i : p) {
    cin >> i.second >> i.first;
  }

  ranges::sort(p);

  for (auto i : p) {
    cout << i.second << " " << i.first << endl;
  }
}

// STARTED: 2023/10/05 09:40:50
// SUBMITTED: 2023/10/05 09:48:13
